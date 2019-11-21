#include <iostream>
using namespace std;
int main() {
	double  a = 10, s = 0, sum=0, n;
	for (int i = 2; i <= 10; i++) {
		a += a * 0.1;
		cout << i <<"day"<<'-'<< a<<"km"<<endl;
 }
	for (int i = 1; i <= 7; i++) {
		a += a * 0.1;
		s += a;
	}
	cout << s << "km"<<endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a += a * 0.1;
		sum += a;
	}
	cout << sum;
	
	return 0;
}