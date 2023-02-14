#include <iostream>
#include <set>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  set<long long> s;
  int dif = 0;

  while (n--)
  {
    long long x;
    cin >> x;
    if (s.count(x) == 0)
    {
      dif++;
      s.insert(x);
    }
  }

  cout << dif << '\n';

  return 0;
}