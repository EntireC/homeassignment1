#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "enter a number starting from 1, if you wish to exit enter 0:\n";
	int a;
	while (true) {
		cin >> a;
		if (a == 0) return 0;
		if (a / 1000 == 0 && a / 100 > 0)
			cout << "yep 3 digits\n";
		else cout << "nope wrooong\n";
	}
}