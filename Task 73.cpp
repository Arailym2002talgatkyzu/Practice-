#include <iostream>
using namespace std;
int main() {
	int x1, y1, a, b, x2, y2, c, d;
	cin >> x1 >> y1 >> a >> b >> x2 >> y2 >> c >> d;
	if (x2<(b + x1) && x2>x1 && (d + x2) > x1 && (d + x2) < (b + x1)) {
		cout << "Yes";
	}
	else if ((y1 > y2 && (a + y1) < (c + y2)) || (y2 > y1 && (c + y2) < (a + y1))){
		cout<<"Yes";
	}
	return 0;
}