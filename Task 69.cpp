#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c; double p = 1.0 * (a + b + c) / 2;
	if ((a + b) <= c || (a + c) <= b || (b + c) <= a) {
		cout << "Such triangle not exists";
	}
	else {
	cout << "S=" << 1.0 * sqrt(p * (p - a) * (p - b) * (p - c));
}
	return 0;
}
