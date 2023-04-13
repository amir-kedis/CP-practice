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
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string word;
    cin >> word;
    if (word.length() > 10)
    {
      cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
    } else {
      cout << word << endl;
    }
  }
  

  return 0;
}