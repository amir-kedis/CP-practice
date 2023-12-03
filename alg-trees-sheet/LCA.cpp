/*
Given two nodes in a binary tree. Find the Lowest Common Ancestor
(LCA) for these two nodes. The node structure has only one pointer to
parent, it has no left and right children. The root is not given. Solve the
problem in
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

struct Tree
{
  int val;
  Tree *parent;
  Tree(int x) : val(x), parent(NULL) {}
};

int getH(Tree *node)
{
  int sum = 0;
  while (node != NULL)
  {
    sum++;
    node = node->parent;
  }
  return sum;
}

/*
  time O(n)
  space O(1)
*/
Tree *LCA1(Tree *node1, Tree *node2)
{
  int h1 = getH(node1);
  int h2 = getH(node2);
  while (h2 > h1)
  {
    node2 = node2->parent;
    h2--;
  }
  while (h1 > h2)
  {
    node1 = node1->parent;
    h1--;
  }
  while (node1 != node2)
  {
    node1 = node1->parent;
    node2 = node2->parent;
  }
  return node1;
}

/*
time O(N^2)
space O(1)
*/
Tree *LCA2(Tree *node1, Tree *node2)
{
  Tree *cur = node1;
  Tree *curC = node2;
  while (cur != NULL)
  {
    curC = node2;
    while (curC != NULL)
    {
      if (cur == curC)
        return cur;
      curC = curC->parent;
    }
    cur = cur->parent;
  }
  return node1;
}



int main()
{
  return 0;
}
