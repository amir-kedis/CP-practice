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

void printArr(vector<int> arr, int size)
{
  for (size_t i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main()
{

  int arrSize;
  cin >> arrSize;
  vector<int> initVector;
  for (size_t i = 0; i < arrSize; i++)
  {
    int x;
    cin >> x;
    initVector.push_back(x);
  }

  int numOfBullets;
  cin >> numOfBullets;
  vector<int> bulletsX;
  vector<int> bulletsY;
  for (size_t i = 0; i < numOfBullets; i++)
  {
    int x, y;
    cin >> x >> y;
    bulletsX.push_back(x);
    bulletsY.push_back(y);
  }

  for (size_t i = 0; i < numOfBullets; i++)
  {
    int index = bulletsX[i] - 1;
    int bulletTarget = bulletsY[i];
    if (index > 0)
    {
      initVector[index - 1] += bulletTarget - 1;
    }
    if (index < arrSize - 1)
    {
      initVector[index + 1] += initVector[index] - (bulletTarget);
    }
    initVector[index] = 0;
  }

  for (size_t i = 0; i < arrSize; i++)
  {
    cout << initVector[i] << " "
         << "\n";
  }

  return 0;
}