#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{
  string sum;
  cin >> sum;

  vector<char> final_sum;

  REP(i, 0, sum.length())
  {
    if (sum[i] != '+')
    {
      final_sum.push_back(sum[i]);
    }
  }

  sort(final_sum.begin(), final_sum.end());

  REP(i, 0, final_sum.size())
  {
    cout << final_sum.at(i);
    if (i == final_sum.size() - 1)
      break;

    cout << '+';
  }

  return 0;
}