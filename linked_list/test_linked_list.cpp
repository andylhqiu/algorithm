//
// Created by QiuLihua on 2017/4/30.
//

#include "test_linked_list.h"
#include "../common/comm.h"
#include "../common/linked_list.h"

#include "linked_list_op.h"



bool test_rm_duplicate()
{
    func_begin(__FUNCTION__);
    vector<int> vec = {1,1,1,2,3,4,5,6,6,6,6,7,8};
    Node * h = linkedlist_from_vector(vec);

    linkedlist_print(h);
    rm_duplicate(h);
    linkedlist_print(h);

}

bool test_rm_all_duplicate()
{
    func_begin(__FUNCTION__);

    vector<int> vec = {1,1,1,2,3,4,5,6,6,6,6,7,8};
    Node * h = linkedlist_from_vector(vec);

    linkedlist_print(h);
    h = rm_all_duplicate(h);
    linkedlist_print(h);

    return false;
}


bool  test_linked_list()
{
    func_begin(__FUNCTION__);

    test_rm_duplicate();
    test_rm_all_duplicate();

    return false;
}