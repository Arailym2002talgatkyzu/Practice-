#include <iostream>
using namespace std;
int main() {
	for (int i = 1001; i <= 1022; i=i+3) {
		cout << i << ",";
	}
	cout << 1025 << '.';
	return 0;
}
