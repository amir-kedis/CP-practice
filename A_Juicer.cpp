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
  int b;
  int d;
  cin >> n >> b >> d;
  int count = 0;
  int times = 0;

  for (int i = 0; i < n; i++)
  {
    int orange;
    cin >> orange;
    if (orange <= b)
    {
      count += orange;
    }
    if (count > d)
    {
      times++;
      count = 0;
    }
  }

  cout << times << endl;
  
  return 0;
}