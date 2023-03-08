#include <iostream>

using namespace std;

int main()
{
  int num;
  string games;
  cin >> num;
  cin >> games;

  int AS = 0, DS = 0;

  for (int i = 0; i < games.length(); i++)
  {
    if (games[i] == 'A')
    {
      AS++;
    }
    else
    {
      DS++;
    }
  }
  if (AS > DS)
  {
    cout << "Anton";
  }
  else if (DS > AS)
  {
    cout << "Danik";
  }
  else
  {
    cout << "Friendship";
  }
  return 0;
}
