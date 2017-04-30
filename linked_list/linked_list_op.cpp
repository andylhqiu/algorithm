//
// Created by QiuLihua on 2017/4/30.
//

#include "linked_list_op.h"
#include "../common/comm.h"
#include "../common/linked_list.h"






void rm_duplicate(Node * h)
{
    Node * p = h;

    if(nullptr == p)
    {
        return;
    }

    Node * p1 = p->next;
    Node * pt = nullptr;
    while(nullptr != p1)
    {
        if(p->val == p1->val)
        {
            pt = p1;
            p1 = pt->next;
            p->next = p1;
            delete pt;
            continue;
        }
        else
        {
            p = p1;
            p1 = p1->next;
        }
    }
}