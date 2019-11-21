#include <iostream>
using namespace std;
int main() {
	int sum = 0, n;
	cin >> n;
		for (int i = 1, j = i; i<=n&& j <= 2 * i; i++, j++) {
			j *= j;
			sum += j;
		}
	cout << sum;
	return 0;
}
