#include <iostream> 

using namespace std; 

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int range, position; 
  cin >> range >> position; 

  int current_number = 1; 
  int middle = (range % 2 == 0) ? range / 2 : int(range / 2) + 1;

  for (int i = 1; i <= middle; i++) {
    if (i == position) {
      cout << current_number; 
      return 0; 
    }
    current_number += 2; 
  }

  current_number = 2; 

  for (int i = middle + 1; i <= range; i++) {
    if (i == position) {
      cout << current_number; 
      return 0; 
    }
    current_number += 2; 
  }

  return 0; 
}