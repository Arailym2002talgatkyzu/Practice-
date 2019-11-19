#include <iostream>
using namespace std;
int main() {

	int n, m;
	cin >> n >> m;
		if (n==11){
				switch (m) {
				case 0:
					cout << "North";
					break;
				case 1:
					cout << "West";
					break;
				case -1:
					cout << "East";
					break;
				}
				
		}
		if (n == 12) {
              switch (m) {
				case 0:
					cout << "West";
					break;
				case 1:
					cout << "South";
					break;
				case -1:
					cout << "North";
					break;
				}
		}
		if (n == 13) {
			switch (m) {
			case 0:
				cout << "South";
				break;
			case 1:
				cout << "East";
				break;
			case -1:
				cout << "West";
				break;
			}
		}
		if (n == 14) {
			switch (m) {
			case 0:
				cout << "East";
				break;
			case 1:
				cout << "North";
				break;
			case -1:
				cout << "South";
				break;
			}

		}
	return 0;
}
