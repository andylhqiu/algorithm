//
// Created by QiuLihua on 2017/3/18.
//

#include "add_2_num_linked.h"



list<int>  add2num_linked(list<int> n1, list<int> n2)
{
    list<int> sum;

    int n = 0;
    int up = 0;
    list<int>::iterator it1 = n1.begin();
    list<int>::iterator it2 = n2.begin();

    while((it1 != n1.end()) && (it2 != n2.end()))
    {
        n  = (*it1 + *it2 + up)%10;
        up = (*it1 + *it2 + up)/10;

        sum.push_back(n);

        it1++;
        it2++;
    }

    list<int>::iterator lb;
    list<int>::iterator le;
    if(it1 != n1.end())
    {
        lb = it1;
        le = n1.end();
    }
    else if(it2 != n2.end())
    {
        lb = it2;
        le = n2.end();
    }
    else
    {
        lb = le = n1.end();
    }
    // insert left
    for(; lb != le; lb++)
    {
        n  = (*lb + up)%10;
        up = (*lb + up)/10;
        sum.push_back(n);
    }
    if(0 != up)
    {
        sum.push_back(up);
    }
    return sum;
}



bool test_add2num_linked()
{
    bool ret = false;
    list<int> n1;
    list<int> n2;
    list<int> sum;

    func_begin(__FUNCTION__);
    n1.push_back(2);
    n1.push_back(4);
    n1.push_back(8);
    n1.push_back(9);

    n2.push_back(5);
    n2.push_back(6);
    n2.push_back(4);

    sum.push_back(7);
    sum.push_back(0);
    sum.push_back(3);
    sum.push_back(0);
    sum.push_back(1);

    list<int> add = add2num_linked(n1, n2);

    ret = equal(sum.begin(), sum.end(), add.begin());

    cout << "\n add2num_linked() result : " << ret  << endl;
    for(list<int>::iterator it=add.begin(); it != add.end(); it++)
    {
        cout << *it << " <- " ;
    }

    return ret;
}