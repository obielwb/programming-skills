#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m, f[1000];
  cin >> n >> m;
  for (int i = 0; i < m; ++i)
  {
    cin >> f[i];
  }
  sort(f, f + m);
  int least = f[n - 1] - f[0];
  for (int i = 1; i <= m - n; i++)
  {
    if (f[i + n - 1] - f[i] < least)
    {
      least = f[i + n - 1] - f[i];
    }
  }
  cout << least << endl;
  return 0;
}