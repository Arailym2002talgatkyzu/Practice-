#include <iostream>
using namespace std;
int main() {
	int a, b, c, n=0;
	cin >> a >> b >> c;
	n += a>0?1:0;
	n += b > 0 ? 1 : 0;
	n += c > 0 ? 1 : 0;
	cout << n;
	return 0;
}
