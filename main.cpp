

#include "ballthrow/ballthrow.h"
#include "add2numlinked/add_2_num_linked.h"
#include "reverse_linkedlist/reverse_linkedlist.h"
#include "SimpleBinarySearchTree/SimpleBinarySearchTree.h"

int main() {
    std::cout << "In ball throwing program." << std::endl;

    vector<string> vblocks = {"5", "-2", "4", "Z", "X", "9", "+", "+"};

    cout << "The input blocks size is " << vblocks.size() << endl;

    cout << "The total score is \n" <<  totalScore(vblocks, vblocks.size()) << endl;


    //
    //test_add2num_linked();

    //
    //test_reverse_linkedlist();

    testDistBST();


    return 0;
}