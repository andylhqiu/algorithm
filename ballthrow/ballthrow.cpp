//
// Created by QiuLihua on 2017/3/18.
//

#include "ballthrow.h"





int totalScore(const vector<string> &blocks, int n)
{
    int sum = 0;
    string stmp = "";
    stringstream ss;
    int now = 0;
    int top = 0;
    stack<int> s;

    for(int i=0; i<n; i++)
    {
        stmp = blocks[i];

        top = s.empty() ? 0 : s.top();
        cout << stmp << "   " << top << endl;
        if("X" == stmp)
        {
            now = 2 * top;
            s.push(now);
        }
        else if("Z" == stmp)
        {
            now = -1 * top;
            s.pop();
        }
        else if("+" == stmp)
        {
            now = top;
            s.pop();
            now += s.empty() ? 0 : s.top();
            s.push(top);
            s.push(now);
        }
        else
        {
            ss << stmp;
            ss >> now;
            ss.clear();
            s.push(now);
        }
        sum += now;
    }

    return sum;
}