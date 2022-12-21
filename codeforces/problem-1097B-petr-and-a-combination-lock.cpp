#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int rotations;
  cin >> rotations;
  vector<int> all_rotations;

  while (rotations--)
  {
    int degress;
    cin >> degress;

    all_rotations.push_back(degress);
  }

  int m = 1 << rotations;
  int sum;
  for (int i = 0; i < m; i++)
  {
    sum = 0;

    for (int j = 0; j < rotations; j++)
    {
      if ((1 << j) & i)
        sum += all_rotations[j];
      else
        sum -= all_rotations[j];
    }

    if (sum % 360 == 0)
    {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";

  return 0;
}