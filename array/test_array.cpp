//
// Created by QiuLihua on 2017/4/30.
//

#include "test_array.h"
#include "../common/comm.h"
#include "../common/array.h"

#include "array_op.h"








bool test_array()
{
    int arr[] = {1,1,1,2,2,3,4,5,5,5,5,6,6,7,8,9,9};
    int len = sizeof(arr)/ sizeof(int);

    print_arr(arr, len);
    rm_duplicated_from_sorted(arr, len);
    print_arr(arr, len);

    return false;
}