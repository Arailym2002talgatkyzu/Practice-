#include <iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	if (k % 2 == 1) {
		if (k<20) {
			cout << 1;
		}
		else if (k > 20 && k < 40) {
			cout << 2;
		}
		else if (k > 40 && k < 60) {
			cout << 3;
		}
		else if (k > 60 && k < 80) {
			cout << 4;
		}
		else if (k > 80 && k < 100) {
			cout << 5;
		}
		else if (k > 100 && k < 120) {
			cout << 6;
		}
		else if (k > 120 && k < 140) {
			cout << 7;
		}
		else if (k > 140 && k < 160) {
			cout << 8;
		}
		else if (k > 160 && k < 180) {
			cout << 9;
		}
	}
	else if (k % 2 == 0 && k < 10 || (k > 20 && k <= 30) || (k > 40 && k <= 50) ||
		(k > 60 && k <= 70) || (k > 80 && k <= 90) || (k > 100 && k <= 110) || (k > 120 && k <= 130) || (k > 140 && k <= 150) || (k > 160 && k <= 170)) {
		if (k % 10 == 0) {
			cout << 4;
		}
		else if (k % 10 == 2) {
			cout << 0;
		}
		else if (k % 10 == 4) {
			cout << 1;
		}
		else if (k % 10 == 6) {
			cout << 2;
		}
		else if (k % 10 == 8) {
			cout << 3;
		}
	}
	else {
		if (k % 10 == 0) {
			cout << 9;
		}
		else if (k % 10 == 2) {
			cout << 5;
		}
		else if (k % 10 == 4) {
			cout << 6;
		}
		else if (k % 10 == 6) {
			cout << 7;
		}
		else if (k % 10 == 8) {
			cout << 9;
		}
	}

	return 0;
}