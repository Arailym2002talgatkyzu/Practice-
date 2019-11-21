#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double cossum = 0;
	for (int i = 3; i <= 111; i = i + 2) {
		cossum += 1.0 * cos(i / (i + 2));
	}
	cout << cossum;
	return 0;
}
