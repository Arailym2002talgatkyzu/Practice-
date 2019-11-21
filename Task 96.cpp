#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, x; double sum = 0;
	cin >> n>>x;
	for (int i = 1; i <= n; i++) {
		sum += 1.0 * 1 / (cos(pow(x, n)));
	}
	cout << sum;
	return 0;
}
