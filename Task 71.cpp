#include <iostream>
using namespace std;
int main() {
	int h, m;
	cin >> h >> m;
	cout << (h + (m / 60)) * 30 - m * 6;
	return 0;
}
