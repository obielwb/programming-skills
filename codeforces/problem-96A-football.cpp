#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string players;
  cin >> players;

  int condition = 1;

  for (int i = 1; i < players.length(); i++)
  {
    if (players[i] == players[i - 1])
    {
      condition++;

      if (condition == 7)
      {
        cout << "YES" << endl;
        return 0;
      }
    }
    else
    {
      condition = 1;
    }
  }

  cout << "NO" << endl;

  return 0;
}