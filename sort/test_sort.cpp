//
// Created by QiuLihua on 2017/4/29.
//

#include "sort.h"

#include "../common/array.h"






bool test_bubble()
{
    func_begin(__FUNCTION__);

    int arr_sorted[] = {1,2,3,4,5,6,7,8,9};
    int arr[] = {9,8,7,6,5,4,3,2,1};

    bubble(arr, sizeof(arr)/sizeof(int));
    print_arr(arr, sizeof(arr)/sizeof(int));

    for(int i=0; i<sizeof(arr_sorted)/sizeof(int); i++)
    {
        if(arr[i] != arr_sorted[i])
        {
            cout << "result error ! i = " << i <<endl;
            return false;
        }
    }

    return true;
}


bool test_sort()
{
    test_bubble();
}