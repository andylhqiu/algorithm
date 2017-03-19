//
// Created by QiuLihua on 2017/3/19.
//

#include "reverse_linkedlist.h"



Node * reverse(Node * head)
{
    Node * p = head;
    Node * pre = head;
    Node * next = nullptr;


    while(nullptr != p)
    {
        next = p->next;
        p->next = head;
        head = p;
        p = next;
    }

    if(nullptr != pre)
    {
        pre->next = nullptr;
    }

    return head;
}


Node* reverse_linkedlist(Node * head, int m=0, int n=-1)
{
    Node * h = head;
    Node * p1 = nullptr;
    Node * p2 = head;
    Node * p3 = nullptr;
    Node * tail = nullptr;
    int index = 1;

    while(index < m-1)
    {

        if(nullptr == h)
        {
            return head;
        }
        h = h->next;
        index++;
    }


    //....


}



bool  test_reverse_linkedlist()
{
    bool ret = false;
    Node * h = nullptr;

    reverse_linkedlist(h, 2, 4);

    cout << "\n In test_reverse_linkedlist()...  end." << endl;
    return ret;
}