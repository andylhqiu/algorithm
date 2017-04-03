//
// Created by QiuLihua on 03/04/2017.
//

#include "SimpleBinarySearchTree.h"



BST createSimpleBST(int *vals, int n)
{
    BST t = NULL;

    if((NULL == vals) || (n <= 0))
    {
        return NULL;
    }

    for(int i =0; i<n; i++)
    {
        BSTNode * nd = new(BSTNode);
        nd->value = vals[i];
        nd->left = NULL;
        nd->right = NULL;

        if(NULL == t)
        {
            t = nd;
            continue;
        }

        BSTNode * p = t;
        while((NULL != p))
        {
            if(nd->value < p->value)
            {
                if(NULL == p->left)
                {
                    p->left = nd;
                    break;
                }
                else
                {
                    p = p->left;
                }
            }
            else
            {
                if(NULL == p->right)
                {
                    p->right = nd;
                    break;
                }
                else
                {
                    p = p->right;
                }
            }
        }

    }


    return t;
}

void findNodeWithTrack(BST t, vector<BSTNode*> &vec, int node)
{

    vec.clear();

    if(NULL == t)
    {
        return;
    }

    BSTNode * nd = t;
    while(NULL != nd)
    {
        vec.push_back(nd);
        if(nd->value > node)
        {
            nd = nd->left;
        }
        else if(node > nd->value)
        {
            nd = nd->right;
        }
        else
        {
            return;
        }

    }
    //not found
    vec.clear();

    return;

}

/*
 * the min distance between two nodes in a binary search tree
 * values: array of nodes
 * n :  num of nodes
 *
 * */
int distBinarySearchTreeNodes(int *values, int n, int node1, int node2)
{
    int dist = ERR_DISTANCE;

    if((NULL == values) ||(n <= 0))
    {
        return ERR_DISTANCE;
    }

    BST t = createSimpleBST(values, n);

    vector<BSTNode *> vec1;
    vector<BSTNode *> vec2;

    findNodeWithTrack(t, vec1, node1);
    findNodeWithTrack(t, vec2, node2);
    cout << "vec1 size = " << vec1.size() << endl;
    cout << "vec2 size = " << vec2.size() << endl;

    int i = 0;
    for(; i<vec1.size() && i<vec2.size(); i++)
    {
        if(vec1[i] == vec2[i])
        {
            continue;
        }
        break;
    }

    dist = vec1.size() - i + vec2.size() - i ;

    return dist;
}



void testDistBST()
{
    int tarr1[] = {5,3,6,1,2,4};
    int tnds1[] = {2,4};

    struct Test
    {
        int ret;
        int * arr;
        int len;
        int * nds;

        Test(int ret, int * arr, int len, int * nds)
        {
            this->ret = ret;
            this->arr = arr;
            this->len = len;
            this->nds = nds;

        }
    };

    Test tests[] = {Test(3, tarr1, sizeof(tarr1)/sizeof(int), tnds1)};

    int ret = -1;
    for(int i=0; i<sizeof(tests)/sizeof(Test); i++)
    {
        ret = distBinarySearchTreeNodes(tests[i].arr, tests[i].len, tests[i].nds[0], tests[i].nds[1]);
        if(tests[i].ret == ret)
        {
            cout<<"test case " << i <<" success . " << endl;
        }
        else
        {
            cout<<"test case " << i <<" failed ! Expected ret = " << tests[i].ret << ", but real ret = " << ret << endl;
        }
    }
}