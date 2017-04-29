//
// Created by QiuLihua on 2017/4/29.
//

#include "search.h"

#include "../common/comm.h"
#include "../common/array.h"



int binary_search(int *arr, int len, int targ)
{

    int low = 0;
    int high = len-1;
    int mid = -1;

    if((nullptr == arr) || (len <= 0))
    {
        cout << "Parameter error ! arr = " << arr <<", len = " << len << endl;
        return -1;
    }

    int vmid = -1;
    while(low <= high)
    {
        mid = (low + high)/2;
        vmid = *(arr+mid);
        if(targ == vmid)
        {
            return mid;
        }
        else if(targ < vmid)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

    }

    return -1;
}






