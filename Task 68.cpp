#include <iostream>
using namespace std;
int main() {
	int a, b, c; double D;
	cin >> a >> b >> c;
	D = b * b - 4 * a * c;
	if (D == 0) {
		cout<<"x="<<1.0 * (-b) / 2 * a;

	}
	else if (D > 0) {
		cout << "x1 = " << (1.0 * (-b) + 1.0*sqrt(1.0 * D)) / 2 * a << endl;
		cout<<"x2 = "<< (1.0 * (-b) - 1.0*sqrt(1.0 * D)) / 2 * a;
	
	}
	else {
		cout << "No solution";
	}
	return 0;
}
