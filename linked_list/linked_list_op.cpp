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


Node * rm_all_duplicate(Node *h)
{
    Node * p = new(Node);
    Node * p1 = h;
    Node * p2 = p1;
    p->val = 0;
    p->next = p1;
    Node * pre = p;

    if(nullptr == h)
    {
        cout << "Parameter error ! h = nullptr" << endl;
        return nullptr;
    }

    int num = 0;
    int n = 0;
    while(nullptr != p2)
    {
        while((nullptr != p2) && (nullptr != p2->next) && (p2->next->val == p1->val))
        {
            n++;
            p2 = p2->next;
        }
        if(n > 0)
        {
            cout << "Duplicate nodes found . value = "<< p1->val << ", num = " << n+1 << endl;
            Node * pt = p2->next;
            p2->next = nullptr;
            linkedlist_destroy(p1);
            p1 = pt;
            p2 = p1;
            pre->next = p1;
            num += n;
            n = 0;
            continue;
        }
        pre = p1;
        p1 = p1->next;
        p2 = p1;
        //pre = pre->next;

    }
    pre = p;
    delete pre;
    p = p->next;

    cout << "Removed nodes num = " << num <<endl;
    return p;
}

/*从单链表的某个节点左右翻转单链表，该节点为头节点
 * k: 非负*/
Node * rotate_list_at_k(Node *h, uint k)
{
    int len = linkedlist_len(h);
    Node * p = h;
    Node * pre = nullptr;
    Node * tail = linkedlist_jump(h, len-1);

    k = k%len;

    if(k <= 0)
    {
        return p;
    }
    pre = linkedlist_jump(h, k-1);
    tail->next = h;
    p = pre->next;
    pre->next = nullptr;

    return p;

}