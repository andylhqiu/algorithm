//
// Created by QiuLihua on 2017/4/28.
//

#include "linked_list.h"


int linkedlist_len(Node * h)
{
    Node * p = h;
    int len = 0;

    while(nullptr != p)
    {
        len++;
        p = p->next;
    }
    return len;
}

Node * linkedlist_jump(Node * h, int n)
{
    Node * p = h;

    while((n > 0) && (nullptr != p))
    {
        n--;
        p = p->next;
    }
    return p;
}