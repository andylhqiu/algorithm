//
// Created by QiuLihua on 2017/4/30.
//

#include "linked_list_op.h"
#include "../common/comm.h"
#include "../common/linked_list.h"



Node * reverse(Node * h)
{
    Node * p1 = NULL;
    Node * p2 = h;
    Node * p3 = NULL;

    if((nullptr == p2) || (nullptr == p2->next))
    {
        return p2;
    }

    while((NULL != p2) && (NULL != p2->next))
    {
        p3 = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p3;
    }
    p2->next = p1;

    return p2;
}


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
/*
 * Given a linked list, swap every two adjacent nodes and return its head.
For example, Given 1->2->3->4, you should return the list as 2->1->4->3.
Your algorithm should use only constant space. You may not modify the values in the list, only nodes
itself can be changed.
 * */
Node * swap_nodes_in_pairs(Node *h)
{
    Node * p = new(Node);
    p->val = 0;
    p->next = h;

    Node * p1 = h;
    Node * p2 = nullptr;
    Node * pre = p;
    Node * pt = nullptr;

    while((nullptr != p1) && (nullptr != p1->next))
    {
        p2 = p1->next;
        pt = p2->next;
        p2->next = p1;
        pre->next = p2;
        p1->next = pt;
        pre = p1;
        p1 = pt;

    }
    pt = p;
    delete pt;
    p = p->next;

    return p;
}

/*
 * GivenasinglylinkedlistL : L0 → L1 → ··· → Ln−1 → Ln,reorderitto: L0 → Ln → L1 → Ln−1 →L2 →Ln−2 →···
You must do this in-place without altering the nodes’ values. For example, Given {1,2,3,4}, reorder it to {1,4,2,3}.
 * */
Node * reorder_list(Node *h)
{
    Node * p1 = h;
    int len = linkedlist_len(h);
    Node * pm = linkedlist_jump(h, ((len+1)/2 - 1));
    Node * p2 = pm->next;
    pm->next = nullptr;
    linkedlist_print(p2);

    p2 = reverse(p2);
    linkedlist_print(p2);

    Node * pt1 = nullptr;
    Node * pt2 = nullptr;
    while(nullptr != p2)
    {
        pt1 = p1->next;
        pt2 = p2->next;
        p2->next = p1->next;
        p1->next = p2;
        p1 = pt1;
        p2 = pt2;
    }

    return h;
}





















