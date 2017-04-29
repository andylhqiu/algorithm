//
// Created by QiuLihua on 2017/4/29.
//

#include <map>
#include "test_search.h"

#include "../common/comm.h"
#include "../common/array.h"
#include "search.h"


bool  test_binary_search()
{
    int arr[] = {1,3,5,6,9,11,13,14,16,18,19};
    map<int,int> cases;

    func_begin(__FUNCTION__);
    cases[1] = 0;
    cases[5] = 2;
    cases[19] = 10;
    cases[20] = -1;
    cases[4] = -1;
    cases[0] = -1;

    int ret = -1;
    for(map<int,int>::iterator it=cases.begin(); it != cases.end(); it++)
    {
        ret = binary_search(arr, sizeof(arr)/ sizeof(int), it->first);
        if(ret != it->second)
        {
            cout << "Test case error ! target = " << it->first << ", expected ret = " << it->second <<", real ret = " << ret << endl;
        }
        else
        {
            cout << "success, target = " << it->first << ", expected ret = " << it->second <<", real ret = " << ret << endl;
        }
    }

    cout <<"All successed ." << endl;
    return true;
}

bool test_search()
{
    test_binary_search();
    return false;
}