﻿#include <iostream>
using namespace std;
int main() {
	int c;
	cin >> c;
	cout << (c % 10) * 100 + ((c / 10) % 10) * 10 + (c / 100) % 10;
	return 0;
}
