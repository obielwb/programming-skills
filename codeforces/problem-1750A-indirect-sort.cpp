#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n;
    cin >> x;
    bool possible = (x == 1);
    for (int p = 1; p < n; p++)
      cin >> x;
    puts(possible ? "YES" : "NO");
  }
}