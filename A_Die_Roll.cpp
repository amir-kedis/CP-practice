#include <iostream>
#include <string>
#include <ctype.h>
#include <set>
#include <vector>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
  int result = min(a, b); // Find Minimum of a and b
  while (result > 0)
  {
    if (a % result == 0 && b % result == 0)
    {
      break;
    }
    result--;
  }
  return result; // return gcd of a and b
}

int main()
{
  int num1, num2;
  cin >> num1 >> num2;

  int largerWinner = max(num1, num2);
  int winningChances = 7 - largerWinner;
  int fractionMin = gcd(winningChances, 6);

  cout << winningChances / fractionMin << "/" << 6 / fractionMin;

  return 0;
}
