#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  gcd(b, a % b);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n_test_cases;
  cin >> n_test_cases;

  while (n_test_cases--)
  {
    int n;
    cin >> n;
    cout << n / 2 << endl;
  }

  return 0;
}