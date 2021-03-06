

#include "ballthrow/ballthrow.h"
#include "add2numlinked/add_2_num_linked.h"
#include "reverse_linkedlist/reverse_linkedlist.h"
#include "SimpleBinarySearchTree/SimpleBinarySearchTree.h"
#include "reverse_btree/reverse_btree.h"
#include "binary_number/binary_number.h"
#include "sort/test_sort.h"
#include "search/test_search.h"
#include "array/test_array.h"
#include "linked_list/test_linked_list.h"


int main() {
    std::cout << "In ball throwing program." << std::endl;

    vector<string> vblocks = {"5", "-2", "4", "Z", "X", "9", "+", "+"};

    cout << "The input blocks size is " << vblocks.size() << endl;

    cout << "The total score is \n" <<  totalScore(vblocks, vblocks.size()) << endl;


    //
    //test_add2num_linked();

    //
    //test_reverse2_linkedlist();

    //testDistBST();



    test_reverse_binarytree();

    test_binary_number();

    test_sort();

    test_search();

    test_array();

    test_linked_list();

    return 0;
}