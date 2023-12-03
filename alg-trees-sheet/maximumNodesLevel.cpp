#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <climits>
#include <set>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int gcd(int a, int b)
{
  int result = min(a, b);
  while (result > 0)
  {
    if (a % result == 0 && b % result == 0)
    {
      break;
    }
    result--;
  }
  return result;
}

int maxLevel(TreeNode *root)
{
  if (!root)
    return 0;

  int maxLevelCount = INT_MIN;
  int level = 0;
  int ans = 0;

  queue<TreeNode *> nodesQueue;
  nodesQueue.push(root);

  while (!nodesQueue.empty())
  {
    int levelNodes;
    level++;

    for (int size = nodesQueue.size(); size > 0; --size)
    {
      levelNodes = nodesQueue.size();
      TreeNode *tmp = nodesQueue.front();
      nodesQueue.pop();

      if (tmp->left != nullptr)
        nodesQueue.push(tmp->left);

      if (tmp->right != nullptr)
        nodesQueue.push(tmp->right);
    }

    if (levelNodes > maxLevelCount)
    {
      maxLevelCount = levelNodes;
      ans = level;
    }
  }

  return ans;
}

int main()
{

  return 0;
}
