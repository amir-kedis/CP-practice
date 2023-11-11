#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
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

int main()
{
  string s;
  cin >> s;
  vector<int> nums;

  for (int i = 0; i < s.length(); i++)
  {
    if (isdigit(s[i]))
    {
      nums.push_back(s[i] - '0');
    }
  }

  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size(); i++)
  {
    if (i == nums.size() - 1)
    {
      cout << nums[i];
    } else {
      cout << nums[i] << "+";
    }
  }
  
  

  return 0;
}