//
// Created by QiuLihua on 2017/4/28.
//

#ifndef ALGORITHM_BINARY_TREE_H
#define ALGORITHM_BINARY_TREE_H

#include "comm.h"

typedef struct  BTNode
{
    int val;
    BTNode * left;
    BTNode * right;
}BTNode, * BTree;


bool binary_tree_equal(BTree t1, BTree t2);

#endif //ALGORITHM_BINARY_TREE_H
