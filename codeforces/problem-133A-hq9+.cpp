#include <iostream> 
#include <string> 

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string input; 
  cin >> input; 

  bool will_produce_output = false;

  for (int i = 0; i < input.length(); i++) {
    if (input[i] == 'H' || input[i] == 'Q' || input[i] == '9') {
      will_produce_output = true;
    }
  }

  if (will_produce_output) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }

  return 0;
}