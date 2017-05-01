//
// Created by QiuLihua on 2017/4/28.
//

#include "../common/binary_tree.h"
#include "../common/comm.h"

BTree binary_tree_from_vector(const vector<int> & v)
{

    return nullptr;
}


bool binary_tree_equal(BTree t1, BTree t2)
{
    BTNode * p1 = t1;
    BTNode * p2 = t2;

    if((nullptr == p1) && (nullptr == p2))
    {
        return true;
    }
    else if((nullptr != p1) && (nullptr != p2) && (p1->val == p2->val))
    {
        return binary_tree_equal(p1->left, p2->left) && binary_tree_equal(p1->right, p2->right);
    }
    else
    {
        return false;
    }
}