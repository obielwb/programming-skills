#include <iostream>
#include <string>

using namespace std;

void tokenize(string s, string del = " ")
{
  int start, end = -1 * del.size();

  do
  {
    start = end + del.size();
    end = s.find(del, start);
    cout << s.substr(start, end - start) << " ";

  } while (end != -1);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string input;
  cin >> input;

  tokenize(input, "WUB");

  return 0;
}