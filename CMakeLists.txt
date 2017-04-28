cmake_minimum_required(VERSION 3.6)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ballthrow/ballthrow.cpp ballthrow/ballthrow.h common/comm.h add2numlinked/add_2_num_linked.cpp add2numlinked/add_2_num_linked.h reverse_linkedlist/reverse_linkedlist.cpp reverse_linkedlist/reverse2_linkedlist.cpp reverse_linkedlist/reverse_linkedlist.h common/linked_list.h SimpleBinarySearchTree/SimpleBinarySearchTree.cpp SimpleBinarySearchTree/SimpleBinarySearchTree.h intersection_2linkedlist/intersection_2linkedlist.cpp intersection_2linkedlist/intersection_2linkedlist.h common/linked_list.cpp backwards_linkedlist/backwards_linkedlist.cpp backwards_linkedlist/backwards_linkedlist.h circle_linkedlist/circle_linkedlist.cpp circle_linkedlist/circle_linkedlist.h reverse_btree/reverse_btree.cpp reverse_btree/reverse_btree.h common/binary_tree.cpp common/binary_tree.h strings/strings.cpp strings/strings.h binary_number/binary_number.cpp binary_number/binary_number.h)
add_executable(algorithm ${SOURCE_FILES})