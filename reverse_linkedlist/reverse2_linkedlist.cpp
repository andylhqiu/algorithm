//
// Created by QiuLihua on 2017/3/19.
//

#include "reverse_linkedlist.h"

Node * reverse2(Node * h)
{
    Node * p1 = NULL;
    Node * p2 = h;
    Node * p3 = NULL;

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




bool  test_reverse2_linkedlist()
{
    bool ret = false;
    Node * h = new Node();
    h->next = nullptr;

    cout << "\n In test_reverse_linkedlist()...  begin." << endl;
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

    h->next = reverse2(h->next);


    for(Node* nd=h->next; nd != nullptr; nd=nd->next)
    {
        cout<<" " << nd->val << " -> ";
    }
    cout << endl;
    cout << "\n In test_reverse2()...  end." << endl;
    return ret;
}