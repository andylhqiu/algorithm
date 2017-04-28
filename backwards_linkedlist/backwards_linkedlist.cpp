//
// Created by QiuLihua on 2017/4/28.
//寻找倒数第n个节点
//

#include "backwards_linkedlist.h"

#include "../common/linked_list.h"



Node * backwards_linkedlist(Node * h, int n)
{
    Node * p = h;
    Node * bp = nullptr;

    if(n < 1)
    {
        cout << "parameter n error ! too little n = " << n <<endl;
        return bp;
    }

    int i = 0;
    while((i < n-1) && (nullptr != p) && (nullptr != p->next))
    {
        i++;
        p = p->next;
    }

    if(i < n-1)
    {
        cout << "parameter n error ! too big n = " << n <<endl;
        return bp;
    }

    bp = h;
    while(nullptr != p->next)
    {
        p = p->next;
        bp = bp->next;
    }

    return bp;
}


bool test_backwards_linkedlist()
{
    func_begin(__FUNCTION__);
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    Node * h = linkedlist_from_vector(vec);
    linkedlist_print(h);

    Node * bp = backwards_linkedlist(h, 3);
    linkedlist_print(bp);

    bp = backwards_linkedlist(h, 1);
    linkedlist_print(bp);

    bp = backwards_linkedlist(h, 0);
    linkedlist_print(bp);

    bp = backwards_linkedlist(h, 20);
    linkedlist_print(bp);

    bp = backwards_linkedlist(h, 9);
    linkedlist_print(bp);

    return true;
}