#include <iostream>
using namespace std;
int main() {
	int x, a, b ,c,d;
	cin >> x;
	a = (x / 1000) % 10;
	b = (x / 100) % 10;
	c = (x / 10) % 10;
	d = x % 10;
	a *= a < 5 ? 1000 : 1;
	b *= b < 5 ? 100 : 10;
	c *= c < 5 ? 1000: 1;
	d *= d < 5 ? 100 : 10;
	cout << a + b + c + d;
	return 0;
}