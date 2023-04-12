#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

using namespace std;
int gcd(int a, int b){int result = min(a, b); while (result > 0){if (a % result == 0 && b % result == 0){break;}result--;}return result;}
int main()
{
  int n;
  int t;
  int k;
  int d;
  cin >> n >> t >> k >> d;

  if ( (n-1) / k * t > d )
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}