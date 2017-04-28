//
// Created by QiuLihua on 2017/3/19.
//

#ifndef ALGORITHM_LINKED_LIST_H
#define ALGORITHM_LINKED_LIST_H




struct Node{
    int val;
    Node* next;
};

int linkedlist_len(Node * h);
Node * linkedlist_jump(Node * h, int n);















#endif //ALGORITHM_LINKED_LIST_H
