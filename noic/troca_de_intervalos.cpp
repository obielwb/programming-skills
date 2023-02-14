#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;

  vector<int> nums;

  for (int i = 1; i <= n; i++)
  {
    int a;
    cin >> a;
    nums.push_back(a);
  }

  for (int i = p; i <= q; i++)
  {
    swap(nums[i], nums[i + (r - p)]);
  }

  for (int i = 0; i < n; i++)
  {
    cout << nums[i] << '\n';
  }

  return 0;
}