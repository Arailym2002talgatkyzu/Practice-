#include <iostream>
using namespace std;
int main() {
	double sum = 0;
	for (int i = 2; i <= 9; i++) {
		sum += 1.0*i /(i+1);
	}
	cout << sum;
	return 0;
}
