

#include "ballthrow/ballthrow.h"
#include "add2numlinked/add_2_num_linked.h"
#include "reverse_linkedlist/reverse_linkedlist.h"
#include "SimpleBinarySearchTree/SimpleBinarySearchTree.h"
#include "intersection_2linkedlist/intersection_2linkedlist.h"
#include "backwards_linkedlist/backwards_linkedlist.h"
#include "circle_linkedlist/circle_linkedlist.h"
#include "reverse_btree/reverse_btree.h";
#include "binary_number/binary_number.h"
#include "sort/sort.h"


int main() {
    std::cout << "In ball throwing program." << std::endl;

    vector<string> vblocks = {"5", "-2", "4", "Z", "X", "9", "+", "+"};

    cout << "The input blocks size is " << vblocks.size() << endl;

    cout << "The total score is \n" <<  totalScore(vblocks, vblocks.size()) << endl;


    //
    //test_add2num_linked();

    //
    test_reverse2_linkedlist();

    //testDistBST();

    test_intersection_2linkedlist();

    test_backwards_linkedlist();

    test_intersect_circle_linkedlist();

    test_reverse_binarytree();

    test_binary_number();

    test_sort();
    return 0;
}