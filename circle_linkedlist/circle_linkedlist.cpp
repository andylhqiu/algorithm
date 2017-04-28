//
// Created by QiuLihua on 2017/4/28.
//

#include "circle_linkedlist.h"

#include "../common/linked_list.h"




Node * intersect_circle_linkedlist(Node *h)
{
    Node * pinter = nullptr;
    Node * p = h;

    while((nullptr != p) && (nullptr != p->next))
    {
        Node * p0 = h;
        while(p0 != p)
        {
            if(p0 == p->next)
            {
                pinter = p->next;
                return pinter;
            }
            p0 = p0->next;
        }
        p = p->next;
    }


    return pinter;
}

bool test_intersect_circle_linkedlist()
{
    bool bret = false;
    func_begin(__FUNCTION__);

    vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12};
    Node * h = linkedlist_from_vector(vec);

    linkedlist_print(h);

    Node * pt = linkedlist_tail(h);
    Node * pinter = linkedlist_jump(h, 0);
    pt->next = pinter;
    Node * pr = intersect_circle_linkedlist(h);

    bret = pr == pinter;
    cout << "pinter = " << pinter->val << endl;
    cout << "pr  = " << pr->val << endl;


    return bret;
}