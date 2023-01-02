#include <iostream> 
#include <math.h>

using namespace std; 

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; 
  cin >> t; 

  while (t--) {
    int n;
    cin >> n; 
    int x; 
    for(int k = 2; k < 35; k++)
    {
      int den = pow(2, k) - 1;
      if (n % den)
        continue;
      x = n / den; 
    }

    cout << x << endl;
  }

  return 0; 
}