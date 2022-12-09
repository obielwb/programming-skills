/*
ID: gabriel127
PROG: gift1
LANG: C++
*/

#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  ofstream fout("gift1.out");
  ifstream fin("gift1.in");

  int np;
  fin >> np;
  vector<string> names;

  for (int i = 0; i < np; i++)
  {
    string name;
    fin >> name;
    names.push_back(name);
  }

  vector<int> cash;
  cash.assign(np, 0);

  for (int i = 0; i < np; i++)
  {
    string giver;
    fin >> giver;
    int position = (find(names.begin(), names.end(), giver)) - names.begin();

    int give, n_receivers;
    fin >> give >> n_receivers;

    int cash_to_distribute = int(give / n_receivers);
    int left_over = give % n_receivers;

    cash[position] -= give;
    cash[position] += left_over;

    while (n_receivers--)
    {
      string receiver;
      fin >> receiver;
      int receiver_position = (find(names.begin(), names.end(), receiver)) - names.begin();
      cash[receiver_position] += cash_to_distribute;
    }
  }

  // Output
  for (int i = 0; i < np; i++)
  {
    fout << names.at(i) << " " << cash.at(i) << endl;
  }

  return 0;
}