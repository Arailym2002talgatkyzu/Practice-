#include <iostream>
using namespace std;
int main() {
	int c;
	cin >> c;
	if ((c / 1000) % 10 > (c / 100) % 10 &&(c/100)%10>(c / 10) % 10&&(c/10)%10 > c % 10) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
