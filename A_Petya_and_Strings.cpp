#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;
int main()
{

  string str1;
  string str2;

  cin >> str1;
  cin >> str2;

  int result = 0;

  for (int i = 0; i < str1.length(); i++)
  {
    if (tolower(str1[i]) < tolower(str2[i]))
    {
      result = -1;
      break;
    }
    else if (tolower(str1[i]) > tolower(str2[i]))
    {
      result = 1;
      break;
    }
  }

  cout << result;

  return 0;
}