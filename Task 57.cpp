#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> c >> b >> a;
	if (a >= 1900 && a <= 9999) {
		bool year = true;
 }
	if (true) {
		if ((b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) && (c >= 1 && c <= 31)) {
			cout << "Yes";
		}
		else if ((b == 4 || b == 6 || b == 9 || b == 11) && (c >= 1 && c <= 30)) {
			cout << "Yes";
		}
		else if (b == 2 && c >= 1 && c <= 28) {
			cout << "Yes";
		}
		else { cout << "No"; 
		}
	}
	if (false) {
		cout << "NO";
}
	

	return 0;
}
