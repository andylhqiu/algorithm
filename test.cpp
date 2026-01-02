//
// Created by QiuLihua on 2017/5/27.
//

/*
struct Node{
    int val;
    Node * next;
};


Node * reverse(Node *h)
{
    Node * p1 = nullptr;
    Node * p2 = h;
    Node * p3 = nullptr;

    if((nullptr == p2) || (nullptr == p2->next))
    {
        return p2;
    }

    while((nullptr != p2) && (nullptr != p2->next))
    {
        p3 = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p3;

    }

    p2->next = p1;

    return p2;

}

Node * link_add(Node *h1, Node * h2)
{
    Node * p1 = reverse(h1);
    Node * p2 = reverse(h2);
    Node * pa = nullptr;

    pa = new Node();
    pa->next = nullptr;
    pa->val = -1;

    Node * pa0 = pa;
    int up = 0;
    while((nullptr != p1) && (nullptr != p2))
    {
        Node * pt = new Node();
        pt->val =  (p1->val + p2->val + up)%10;
        up = (p1->val + p2->val + up)/10;
        pt->next = nullptr;
        pa0->next = pt;
        pa0 = pt;

        p1 = p1->next;
        p2 = p2->next;
    }

    Node * p3 = nullptr;
    if(nullptr != p1)
    {
        p3 = p1;
    }
    else if(nullptr != p2)
    {
        p3 = p2;
    }

    while(nullptr != p3)
    {
        Node * pt = new Node();
        pt->val = (up + pt->val)%10;
        up = (up + pt->val)/10;
        pt->next = nullptr;
        pa0->next = pt;
        pa0 = pt;
        p3 = p3->next;
    }
    if(0 != up)
    {
        Node * pt = new Node();
        pt->val = up;
        //pt->next;
    }

    h1 = reverse(p1);
    h2 = reverse(p2);

    p3 = pa;
    pa = pa->next;
    delete  p3;
    pa = reverse(pa);

    return pa;
}

*/
