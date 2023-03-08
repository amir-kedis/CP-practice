#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
  int moves = 0;

  for (size_t i = 0; i < 5; i++)
  {
    for (size_t j = 0; j < 5; j++)
    {
      int cell;
      cin >> cell;
      if (cell == 1)
      {
        int horMoves = (j <= 2) ? 2 - j : j - 2;

        int verMoves = (i <= 2) ? 2 - i : i - 2;

        moves = horMoves + verMoves;
        break;
      }
    }
  }

  cout << moves;

  return 0;
}