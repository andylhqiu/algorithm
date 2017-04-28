//
// Created by QiuLihua on 2017/4/28.
//


#include "intersection_2linkedlist.h"



Node * intersection_2linkedlist(Node * h1, Node * h2)
{
    Node * inter = NULL;
    int len1 = 0;
    int len2 = 0;
    Node * p1 = h1;
    Node * p2 = h2;

    if( (NULL == h1) || (NULL == h2))
    {
        return NULL;
    }

    len1 = linkedlist_len(h1);
    len2 = linkedlist_len(h2);

    if(len1 > len2)
    {
        p1 = linkedlist_jump(h1, len1-len2);
    }
    else if(len2 > len1)
    {
        p2 = linkedlist_jump(h2, len2-len1);
    }

    while((nullptr != p1) && (nullptr != p2))
    {
        if(p1 == p2)
        {
            inter = p1;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return inter;
}

bool test_intersection_2linkedlist()
{
    cout << "In test_intersection_2linkedlist() begin." << endl;



    cout << "In test_intersection_2linkedlist() end." << endl;
    return false;
}