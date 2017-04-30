cmake_minimum_required(VERSION 3.6)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ballthrow/ballthrow.cpp ballthrow/ballthrow.h common/comm.h add2numlinked/add_2_num_linked.cpp add2numlinked/add_2_num_linked.h reverse_linkedlist/reverse_linkedlist.cpp reverse_linkedlist/reverse_linkedlist.h common/linked_list.h SimpleBinarySearchTree/SimpleBinarySearchTree.cpp SimpleBinarySearchTree/SimpleBinarySearchTree.h  lib/linked_list.cpp reverse_btree/reverse_btree.cpp reverse_btree/reverse_btree.h lib/binary_tree.cpp common/binary_tree.h strings/strings.cpp strings/strings.h binary_number/binary_number.cpp binary_number/binary_number.h sort/sort.cpp sort/sort.h lib/array.cpp common/array.h sort/test_sort.cpp sort/test_sort.h search/search.cpp search/search.h search/test_search.cpp search/test_search.h array/array_op.cpp array/array_op.h array/test_array.cpp array/test_array.h linked_list/linked_list_op.cpp linked_list/linked_list_op.h linked_list/test_linked_list.cpp linked_list/test_linked_list.h)
add_executable(algorithm ${SOURCE_FILES})