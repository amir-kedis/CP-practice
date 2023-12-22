#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

int minimumNumberOfJumps(vector<int> nums)
{
  int numOfSteps = 0;
  int lIndex = 0;
  int rIndex = 0;

  while (rIndex < nums.size() - 1)
  {
    int maxIndex = 0;
    for (int i = lIndex; i <= rIndex; i++)
    {
      maxIndex = max(maxIndex, i + nums[i]);
    }
    lIndex = rIndex + 1;
    rIndex = maxIndex;
    numOfSteps++;
  }

  return numOfSteps;
}

vector<int> readInput()
{
  vector<int> nums;
  int n;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    nums.push_back(temp);
  }
  return nums;
}

int main()
{
  vector<int> nums = readInput();

  cout << minimumNumberOfJumps(nums) << endl;

  return 0;
}