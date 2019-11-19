#include <iostream>
using namespace std;
int main() {
	int x, y, a ,b,c, d,e, f;
	cin >> x >> y;
	a = (x / 100) % 10;
	b = (x / 10) % 10;
	c = x % 10;
	d = (y / 100) % 10;
	e = (y / 10) % 10;
	f = y % 10;
	cout << a * 100000 + b * 10000 + c * 1000 + f * 100 + e * 10 + d;
	return 0;
}
