/* OBI 2020 - 1° Fase - A */
#include<iostream>

using namespace std;

int main() {
	int d;
	cin >> d;

	d -= 3;
	d %= 8;

	if (d == 3) {
		std::cout << 1;
	} 
	if (d == 4) {
		std::cout << 2;
	}
	if (d == 5) {
		std::cout << 3;
	}

	return 0; 
}
