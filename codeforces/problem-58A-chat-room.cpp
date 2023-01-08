#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  string hello = "hello";

  int j = 0, pas = 0;

  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == hello[j])
    {
      j++;
      pas++;
    }
  }

  if (pas == 5)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}