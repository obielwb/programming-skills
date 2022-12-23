#include <iostream>
#include <vector>

using namespace std;

bool have_found_odd_divisor_different_of_one(int n)
{
  int lcm = 1;
  bool is_found = false;

  while (lcm <= n)
  {
    if (lcm % n == 0 && lcm % 2 == 0 && lcm != 1)
    {
      is_found = true;
      break;
    }
    lcm++;
  }

  return is_found;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int m;
  cin >> m;

  long long n;
  while (m--)
  {
    cin >> n;
    if (n & 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      bool ok = false;
      long long div = n;
      while (div > 2)
      {
        div /= 2;
        if (div & 1)
        {
          if (n % div == 0)
          {
            ok = true;
            break;
          }
        }
      }
      if (ok)
      {
        // cout<<div<<endl;
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}