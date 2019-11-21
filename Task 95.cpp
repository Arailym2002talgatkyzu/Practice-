#include <iostream>
using namespace std;
int main() {
	int a, n, p=1;
	cin >> a >> n;
	for (int i = 1; i <= n; i++) {
		p *= (a + i)*(a + i);
	}
	cout << p;
	return 0;
}
