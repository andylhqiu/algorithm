//
// Created by QiuLihua on 2017/4/30.
//

#include "array_op.h"
#include "../common/comm.h"
#include "../common/array.h"




void rm_duplicated_from_sorted(int *arr, int len)
{

    if((NULL == arr) || (len <= 0))
    {
        return;
    }

    int i = 1;
    int * p = arr + 1;
    int * p0 = arr;
    while(i < len)
    {
        i++;
        if(*p == *p0)
        {
            p++;
            continue;
        }

        p0++;
        *p0 = *p;
        p++;
    }

    p0++;
    while(p0 < (arr+len))
    {
        *p0 = 0;
        p0++;
    }
}