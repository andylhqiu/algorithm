//
// Created by QiuLihua on 2017/3/18.
//

#ifndef ALGORITHM_COMM_H_H
#define ALGORITHM_COMM_H_H




#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include <list>


#include <algorithm>


using namespace std;


void  func_begin(const char * func_name);



inline void  func_begin(const char * func_name)
{
    cout << "-------------------------------------------------------------\n" << func_name <<endl << "-------------------------------------------------------------\n" << endl;

}








#endif //ALGORITHM_COMM_H_H
