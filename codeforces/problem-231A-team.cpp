#include <iostream>

using namespace std;

int main()
{
  int n;
  std::cin >> n;

  int count = 0;
  for (int i = 0; i < n; i++)
  {
    int a, b, c;
    std::cin >> a >> b >> c;

    if ((a + b + c) >= 2)
    {
      count++;
    }
  }

  std::cout << count;

  return 0;
}