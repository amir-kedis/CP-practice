#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;
int main()
{
  int moveCount;
  cin >> moveCount;

  vector<int> moves;
  int move;
  for (int i = 0; i < moveCount; i++)
  {
    cin >> move;
    moves.push_back(move);
  }

  int serejaScore = 0;
  int DimaScore = 0;
  for (int i = 0; i < moveCount; i++)
  {
    if (i & 1 == 1)
    {
      if (moves[0] > moves[moves.size() - 1])
      {
        DimaScore += moves.front();
        moves.erase(moves.begin());
      }
      else
      {
        DimaScore += moves.back();
        moves.pop_back();
      }
    }
    else
    {
      if (moves[0] > moves[moves.size() - 1])
      {
        serejaScore += moves.front();
        moves.erase(moves.begin());
      }
      else
      {
        serejaScore += moves.back();
        moves.pop_back();
      }
    }
  }

  cout << serejaScore << " " << DimaScore;

  return 0;
}