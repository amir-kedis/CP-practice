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
  unsigned long long n,x;
  cin >> n >> x;

  unsigned long long total = x;
  int sadKids = 0;

  for (int i = 0; i < n; i++)
  {
    char sign;
    unsigned long long amount;

    cin >> sign >> amount;

    if (sign == '+')
    {
      total += amount;
    } else {

      if (amount > total)
      {
        sadKids++;
      } else {
        total -= amount;
      }
    }
  }

  cout << total << " " << sadKids << endl;
  

  return 0;
}