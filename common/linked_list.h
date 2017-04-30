//
// Created by QiuLihua on 2017/3/19.
//

#ifndef ALGORITHM_LINKED_LIST_H
#define ALGORITHM_LINKED_LIST_H

#include "comm.h"


struct Node{
    int val;
    Node* next;
};

int linkedlist_len(Node * h);
Node * linkedlist_jump(Node * h, int n);
Node * linkedlist_from_vector(const vector<int> & vec);
Node * linkedlist_tail(Node * h);
void linkedlist_print(Node * h);
void linkedlist_destroy(Node *h);















#endif //ALGORITHM_LINKED_LIST_H
