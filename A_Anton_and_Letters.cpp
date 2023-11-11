#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>
#include <set>
#include <vector>

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
  getline(cin, s);

  set<char> uniqueChars;
  for (int i = 0; i < s.length(); i++)
  {
    if (isalpha(s[i]))
    {
      uniqueChars.insert(s[i]);
    }
  }

  cout << uniqueChars.size() << endl;

  return 0;
}