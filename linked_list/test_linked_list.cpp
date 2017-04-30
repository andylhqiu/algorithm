//
// Created by QiuLihua on 2017/4/30.
//

#include "test_linked_list.h"
#include "../common/comm.h"
#include "../common/linked_list.h"

#include "linked_list_op.h"

bool  test_reverse_linkedlist()
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

    h->next = reverse(h->next);


    for(Node* nd=h->next; nd != nullptr; nd=nd->next)
    {
        cout<<" " << nd->val << " -> ";
    }
    cout << endl;
    cout << "\n In test_reverse2()...  end." << endl;
    return ret;
}

bool test_intersection_2linkedlist()
{
    func_begin(__FUNCTION__);

    vector<int> vec1 = {1,2,3,4};
    vector<int> vec2 = {4,5,6};
    vector<int> vec3 = {11,12,13};

    Node *h1 = linkedlist_from_vector(vec1);
    Node *h2 = linkedlist_from_vector(vec2);
    Node *h3 = linkedlist_from_vector(vec3);

    linkedlist_print(h1);
    linkedlist_print(h2);

    Node *t1 = linkedlist_tail(h1);
    Node *t2 = linkedlist_tail(h2);
    if(nullptr != t1)
    {
        t1->next = h3;
    }
    if(nullptr != t2)
    {
        t2->next = h3;
    }
    linkedlist_print(h1);
    linkedlist_print(h2);

    Node * pinter = intersection_2linkedlist(h1, h2);

    linkedlist_print(pinter);

    cout << "In test_intersection_2linkedlist() end." << endl;
    return false;
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

bool test_rm_duplicate()
{
    func_begin(__FUNCTION__);
    vector<int> vec = {1,1,1,2,3,4,5,6,6,6,6,7,8};
    Node * h = linkedlist_from_vector(vec);

    linkedlist_print(h);
    rm_duplicate(h);
    linkedlist_print(h);

    return true;
}

bool test_rm_all_duplicate()
{
    func_begin(__FUNCTION__);

    vector<int> vec = {1,1,1,2,3,4,5,6,6,6,6,7,8,8,9};
    Node * h = linkedlist_from_vector(vec);

    linkedlist_print(h);
    h = rm_all_duplicate(h);
    linkedlist_print(h);

    return false;
}

void test_rotate_list_at_k()
{
    func_begin(__FUNCTION__);

    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    Node *h = linkedlist_from_vector(vec);

    linkedlist_print(h);
    h = rotate_list_at_k(h, 5);
    linkedlist_print(h);
}


bool test_swap_nodes_in_pairs()
{
    func_begin(__FUNCTION__);

    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    Node *h = linkedlist_from_vector(vec);

    linkedlist_print(h);
    h = swap_nodes_in_pairs(h);
    linkedlist_print(h);

    return true;
}

bool  test_reorder_list()
{
    func_begin(__FUNCTION__);

    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    Node * h = linkedlist_from_vector(vec);

    linkedlist_print(h);
    h = reorder_list(h);
    linkedlist_print(h);

    return true;
}

bool  test_linked_list()
{
    func_begin(__FUNCTION__);

    test_reverse_linkedlist();
    test_intersection_2linkedlist();
    test_backwards_linkedlist();
    test_intersect_circle_linkedlist();
    test_rm_duplicate();
    test_rm_all_duplicate();
    test_rotate_list_at_k();
    test_swap_nodes_in_pairs();
    test_reorder_list();


    return false;
}