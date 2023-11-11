#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;
int gcd(int a, int b){int result = min(a, b); while (result > 0){if (a % result == 0 && b % result == 0){break;}result--;}return result;}
int main()
{
  int n = 0, k = 0;
  cin >> n >> k;

  string s = "";
  for (int i = 0; i < n; i++)
  {
    s += 'a' + (i % k);
  }

  cout << s << endl;
  
  return 0;
}