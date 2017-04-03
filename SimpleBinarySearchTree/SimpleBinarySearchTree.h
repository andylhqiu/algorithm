//
// Created by QiuLihua on 03/04/2017.
//

#ifndef ALGORITHM_SIMPLEBINARYSEARCHTREE_H
#define ALGORITHM_SIMPLEBINARYSEARCHTREE_H



#include "../common/comm.h"


const int ERR_DISTANCE = -1;


typedef struct  BSTNode{
    int value;
    BSTNode *left;
    BSTNode *right;
} *BST;


void testDistBST();

#endif //ALGORITHM_SIMPLEBINARYSEARCHTREE_H
