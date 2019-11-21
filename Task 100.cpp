#include <iostream>
using namespace std;
int main() {
	for (int i = 1000; i <= 9999; i++) {
		if ((i / 1000) % 10 != 5 && (i / 10) % 10!=5 &&
			 (i / 100) % 10 != 5 && i % 10 !=5&& (i / 1000) % 10 != 6 && (i / 10) % 10 != 6 &&
			(i / 100) % 10 != 6 && i % 10 != 6
		
			)
			cout << i << " ";
	}
	return 0;
}