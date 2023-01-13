
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
  return a.first < b.first;
}

vector<pair<int, int>> sort(vector<pair<int, int>> &m)
{
  vector<pair<int, int>> a;
  for (auto &it : m)
  {
    a.push_back(it);
  }

  sort(a.begin(), a.end(), cmp);

  return a;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<pair<int, int>> m;

  int s, n;
  cin >> s >> n;

  while (n--)
  {
    int x, y;
    cin >> x >> y;
    pair<int, int> p = {x, y};
    m.push_back(p);
  }

  vector<pair<int, int>> result = sort(m);

  for (auto &it : result)
  {
    if (s > it.first)
    {
      s += it.second;
    }
    else
    {
      cout << "NO" << '\n';
      return 0;
    }
  }

  cout << "YES" << '\n';

  return 0;
}