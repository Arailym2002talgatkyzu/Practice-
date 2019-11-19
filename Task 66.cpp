#include <iostream>
using namespace std;
int main() {
	int x,y;
	cin >>x>>y;
	cout << ((x / 100) % 10) * 1000 + ((x / 10) % 10) * 100 + (y / 100) % 10 * 10 + (y / 10) % 10;
	return 0;
}
