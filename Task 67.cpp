#include <iostream>
using namespace std;
int main() {
	int x,b,c, d,e;
	cin >> x;
	b = (x / 1000) % 10;
	c = (x / 100) % 10;
	d = (x / 10) % 10;
	e = x % 10;
	int max = b > c&& b > d&& b > e ? b : c > d&& c > e&& c > b ? c : d > e&& d > c&& d > b ? d : e;
	int min= b < c&& b < d&& b < e ? b : c < d&& c <e&& c < b ? c : d < e&& d < c&& d < b ? d : e;
	if ((max==b && min == c)||(max==c&&min==b)) {
		cout << c * 1000 + b * 100 + d * 10 + e;
	}
	else if ((max == b && min == d) || (max == d && min == b)) {
		cout << d * 1000 + c * 100 + b * 10 + e;
	}
	else if ((max == b && min == e) || (max == e && min == b)) {
		cout << e * 1000 + c * 100 + d * 10 + b;
	}
	else if ((max == c && min == d) || (max == d && min == c)) {
		cout << b * 1000 + d * 100 + c * 10 + e;
	}
	else if ((max == c && min == e) || (max == e && min == c)) {
		cout << b * 1000 + e * 100 + d * 10 + c;
	}
	else if ((max == d && min == e) || (max == e && min == d)) {
		cout << b * 1000 + c * 100 + e * 10 + d;
	}

	return 0;
}
