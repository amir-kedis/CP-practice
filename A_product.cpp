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
  
  for (int i = 0; i < 2; i++)
  {
    
    unsigned long long num1, num2;

    cin >> num1 >> num2;

    unsigned long long result = num1 * num2;

    cout << result << endl;
  }
  


  return 0;
}