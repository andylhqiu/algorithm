//
// Created by QiuLihua on 2017/4/30.
//

#ifndef ALGORITHM_LINKED_LIST_OP_H
#define ALGORITHM_LINKED_LIST_OP_H


#include "../common/linked_list.h"







Node * reverse(Node * h);
Node * intersection_2linkedlist(Node * h1, Node * h2);
Node * backwards_linkedlist(Node * h, int n);
Node * intersect_circle_linkedlist(Node *h);
void rm_duplicate(Node * h);
Node * rm_all_duplicate(Node *h);
Node * rotate_list_at_k(Node *h, unsigned int k);
Node * swap_nodes_in_pairs(Node *h);
Node * reorder_list(Node *h);


#endif //ALGORITHM_LINKED_LIST_OP_H
