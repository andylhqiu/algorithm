//
// Created by QiuLihua on 2017/4/28.
//


#include "../common/linked_list.h"


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

Node * linkedlist_from_vector(const vector<int> & vec)
{
    Node * h = nullptr;

    for(int i = vec.size()-1; i>=0; i--)
    {
        Node * t = (Node *)malloc(sizeof(Node));
        t->next = h;
        t->val = vec[i];
        h = t;
    }
    return h;
}

Node * linkedlist_tail(Node * h)
{
    Node * p = h;

    while((nullptr != p) && (nullptr != p->next))
    {
        p = p->next;
    }

    return p;
}

void linkedlist_print(Node * h)
{
    Node * p = h;

    while(nullptr != p)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

void linkedlist_destroy(Node *h)
{
    Node * p = h;

    while(nullptr != h)
    {
        p = h;
        h = h->next;
        delete p;
    }

}