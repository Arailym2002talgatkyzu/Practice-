#include <iostream>
using namespace std;
int main(){
	int d1, d2, m1, m2, y1, y2;
	cin >> d1 >> m1 >> y1;
	cin >> d2 >> m2 >> y2;
	if (y1 > y2) {
		cout << "Yes";
	}
	else if (y1 == y2 && m1 > m2) {
		cout << "Yes";
	}
	else if (y1 == y2 && m1 == m2 && d1 > d2) {
		cout << "Yes";
	}
	else { cout << "NO"; }
	return 0;
	}
