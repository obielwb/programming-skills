// Cáculo rápido - OBI 2021 fase 2

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int s, a, b;
  cin >> s >> a >> b;
  int qtd = 0;

  for (int i = a; i <= b; i++)
  {
    int sum = 0;
    int temp = i;

    while (temp > 0)
    {
      sum += temp % 10;
      temp = (temp - (temp % 10)) / 10;
    }

    if (sum == s)
      qtd++;
  }

  cout << qtd << '\n';

  return 0;
}