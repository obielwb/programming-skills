#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  bool only_upper = true;
  for (int i = 1; i < s.length(); i++)
  {
    if (islower(s[i]))
    {
      only_upper = false;
    }
  }

  bool except_first = false;
  if (islower(s[0]) && only_upper)
  {
    except_first = true;
  }

  if (only_upper || except_first)
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (isupper(s[i]))
        s[i] = tolower(s[i]);
      else
        s[i] = toupper(s[i]);
    }
  }

  cout << s << '\n';

  return 0;
}