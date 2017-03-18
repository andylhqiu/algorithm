//
// Created by QiuLihua on 2017/3/18.
//

#include "add_2_num_linked.h"



list<int>  add2num_linked(list<int> n1, list<int> n2)
{
    list<int> sum;


    return sum;
}



bool test_add2num_linked()
{
    bool ret = false;
    list<int> n1;
    list<int> n2;
    list<int> sum;

    n1.push_front(2);
    n1.push_front(4);
    n1.push_front(3);

    n2.push_front(5);
    n2.push_front(6);
    n2.push_front(4);

    sum.push_front(7);
    sum.push_front(0);
    sum.push_front(8);

    list<int> add = add2num_linked(n1, n2);

    ret = equal(sum.begin(), sum.end(), add.begin());

    cout << "\n add2num_linked() result : " << ret  << endl;

    return ret;
}