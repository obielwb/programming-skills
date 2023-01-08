#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  string vowels = "aoyeui";
  string final = "";

  for (int i = 0; i < s.size(); i++)
  {
    s[i] = tolower(s[i]);
    size_t found = vowels.find(s[i]);
    if (found == string::npos)
    {
      final += '.';
      final += s[i];
    }
  }

  cout << final << '\n';

  return 0;
}