#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
  string userName;
  cin >> userName;

  string DistinctChars = "";

  for (int i = 0; i < userName.length(); i++)
  {
    bool found = false;
    for (int j = 0; j < DistinctChars.length(); j++)
    {
      if (userName[i] == DistinctChars[j])
      {
        found = true;
        break;
      }
    }

    if (!found)
    {
      DistinctChars += userName[i];
    }
  }

  if (DistinctChars.length() % 2 == 0)
  {
    cout << "CHAT WITH HER!";
  }
  else
  {
    cout << "IGNORE HIM!";
  }

  return 0;
}