//
// Created by QiuLihua on 2017/4/29.
//

#include "array.h"

#include "comm.h"



void print_arr(int *arr, int len)
{
    if( (nullptr == arr) || (len <= 0))
    {
        return;
    }

    int i = 0;
    while(i < len)
    {
        cout << *(arr + i) << " ";
        i++;
    }
    cout << endl;
}