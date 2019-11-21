#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 100; i++) {
		cout << i << "$" << "-" << i * 70 << "R" << "-" << 1.0*(i * 70) / 20 << "kg";
		cout << endl;
	}
	return 0;
}
