#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

int stupid_fib(int n)
{
  if (n < 2)
    return 1;
  return stupid_fib(n - 1) + stupid_fib(n - 2);
}

vector<int> dp(1000, -1);
int dp_fib(int n)
{
  if (dp[n] != -1)
    return dp[n];
  return dp[n] = dp_fib(n-1) + dp_fib(n-2);
}

int main()
{
  // DP FIP O(n)
  dp[0] = 1;
  dp[1] = 1;
  cout << dp_fib(4) << endl;
  cout << dp_fib(6) << endl;
  cout << dp_fib(7) << endl;
  cout << dp_fib(40) << endl;
  cout << dp_fib(60) << endl;

  // STUPID FIB O(2^n)
  /*   cout << stupid_fib(4) << endl;
    cout << stupid_fib(6) << endl;
    cout << stupid_fib(7) << endl;
    cout << stupid_fib(40) << endl; // 1.1 seconds */
  return 0;
}