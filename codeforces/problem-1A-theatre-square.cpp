#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  int n_flagstones = 0;

  int size_flag_horizontal = 0;
  while (size_flag_horizontal < a)
  {
    size_flag_horizontal += c;
    n_flagstones++;
  }

  int size_flag_vertical = c;
  int flagstones_add_vertical = 0;
  while (size_flag_vertical < b)
  {
    size_flag_vertical += c;
    flagstones_add_vertical++;
  }

  n_flagstones += flagstones_add_vertical * n_flagstones;

  cout << n_flagstones;

  return 0;
}