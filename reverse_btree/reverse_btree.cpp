//
// Created by QiuLihua on 2017/4/28.
//

#include "reverse_btree.h"

#include "../common/binary_tree.h"



void reverse_binarytree(BTree  t)
{
    queue<BTNode *> q;

    if(nullptr == t)
    {
        return ;
    }

    q.push(t);
    while(!q.empty())
    {
        BTNode * pt = q.front();
        q.pop();
        if(nullptr != pt->left)
        {
            q.push(pt->left);
        }
        if(nullptr != pt->right)
        {
            q.push(pt->right);
        }
        BTNode * tmp = pt->left;
        pt->left = pt->right;
        pt->right = tmp;
    }
}


bool test_reverse_binarytree()
{

    return false;
}