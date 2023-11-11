#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>

using namespace std;
int main()
{
  string word;
  cin >> word;

  int lowerCount = 0;
  for (int i = 0; i < word.length(); i++)
  {
    if (islower(word[i]))
    {
      lowerCount++;
    }
  }

  if (lowerCount >= word.length() / 2.0)
  {
    for (int i = 0; i < word.length(); i++)
    {
      word[i] = tolower(word[i]);
    }
  }
  else
  {
    for (int i = 0; i < word.length(); i++)
    {
      word[i] = toupper(word[i]);
    }
  }
  cout << word;

  return 0;
}