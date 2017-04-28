//
// Created by QiuLihua on 2017/4/28.
//

#include <map>
#include "binary_number.h"

#include "../common/comm.h"



/*计算正整数中二进制位为1的位数*/
int num_of_1bit(uint n)
{
    int num = 0;

    while(n)
    {
        num++;
        n &= n-1;
    }
    return num;
}

bool test_binary_number()
{
    bool bret = false;

    func_begin(__FUNCTION__);
    map<int, int> cases;
    cases[1] = 1;
    cases[2] = 1;
    cases[3] = 2;
    cases[6] = 2;
    cases[7] = 3;
    cases[9] = 2;

    for(map<int,int>::iterator it = cases.begin(); it!=cases.end(); it++)
    {
        if(it->second != num_of_1bit(it->first))
        {
            bret = false;
            cout << "case[" << it->first <<"]=" <<it->second << " failed ! ret = " <<num_of_1bit(it->first);
            return false;
        }
    }

    cout << "All cases success." << endl;
    return true;
}

