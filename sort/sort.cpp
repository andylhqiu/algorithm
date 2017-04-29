//
// Created by QiuLihua on 2017/4/29.
//

#include "sort.h"

#include "../common/comm.h"






void bubble(int * arr, int len)
{
    if( (nullptr == arr) || (len <= 0))
    {
        return;
    }

    int tmp = 0;
    for(int i=0; i<len-1; i++)
    {
        for(int j =0; j<len-1-i; j++)
        {
            if( *(arr+j) > *(arr+j+1))
            {
                tmp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = tmp;

            }

        }
    }
    return;
}



