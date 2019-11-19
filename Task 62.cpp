#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,e, x;
	cin >> x;
	a = (x / 10000) % 10;
	b = (x / 1000) % 10;
	c = (x / 100) % 10;
	d = (x / 10) % 10;
	e = x % 10;
	if (a % 2 == 1) {
		a = 0;
	}
	if (b % 2 == 1) {
		b = 0;
	}
	if (c % 2 == 1) {
		c = 0;
	}
	if (d % 2 == 1) {
		d = 0;
	}
	if (e % 2 == 1) {
		d = 0;
	}
	cout << a * 10000 + b * 1000 + c * 100 + d * 10 + e;
	return 0;
}
