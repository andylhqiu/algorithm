//
// Created by QiuLihua on 2017/3/19.
//

#include "reverse_linkedlist.h"


Node * reverse2(Node * head)
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


    if(nullptr == h  || nullptr == h->next)
    {
        return head;
    }

    Node * h1 = h->next;
    Node * p1 = h1;
    while(index <= n || n < m)
    {
        tail = p1->next;
        if(nullptr == tail)
        {
            break;
        }
        p1 = p1->next;
        index++;
    }
    p1->next = nullptr;

    h1 = reverse2(h1);
    h->next =h1;

    if(nullptr == tail)
    {
        return head;
    }

    p1 = h1;
    while(nullptr != p1->next)
    {
        p1 = p1->next;
    }
    p1->next = tail;

    return head;

}



bool  test_reverse2_linkedlist()
{
    bool ret = false;
    Node * h = new Node();
    h->next = nullptr;

    func_begin(__FUNCTION__);
    vector<int> v = {1,2,3,4,5,6};
    for(int i=0; i<v.size(); i++)
    {
        int n = v[v.size() - i -1];
        Node *  nd = new Node();
        nd->val = n;
        nd->next = h->next;
        h->next = nd;
    }

    for(Node* nd=h->next; nd != nullptr; nd=nd->next)
    {
        cout<<" " << nd->val << " -> ";
    }
    cout << endl;

    h->next = reverse_linkedlist(h->next, 2, 4);


    for(Node* nd=h->next; nd != nullptr; nd=nd->next)
    {
        cout<<" " << nd->val << " -> ";
    }
    cout << endl;
    cout << "\n In test_reverse_linkedlist()...  end." << endl;
    return ret;
}