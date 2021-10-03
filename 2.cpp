#include "stdafx.h"
#include <iostream>

using namespace std;

void main()
{
	cout << "how many days till the New Year? (warning: leap years don't exist)\ninput the month number (from 1 to 12)\n";
	int month = 0;
	int day = 0;
	while (!month) {
		int m;
		cin >> m;
		if (m > 0 && m < 13) month = m;
		else cout << "nope that's not real\n";
	}
	if (month == (1, 3, 5, 7, 8, 10, 12)) {
		cout << "input the day number (from 1 to 31)\n";
		while (!day) {
			int d;
			cin >> d;
			if (d > 0 && d < 32) day = d;
			else cout << "nope that's not real\n";
		}
	}
	else if (month == 2) {
		cout << "input the day number (from 1 to 28)\n";
		while (!day) {
			int d;
			cin >> d;
			if (d > 0 && d < 29) day = d;
			else cout << "nope that's not real\n";
		}
	}
	else {
		cout << "input the day number (from 1 to 30)\n";
		while (!day) {
			int d;
			cin >> d;
			if (d > 0 && d < 31) day = d;
			else cout << "nope that's not real\n";
		}
	}
	switch (month) {
	case 1: month = 0; break;
	case 2: month = 31; break;
	case 3: month = 59; break;
	case 4: month = 90; break;
	case 5: month = 120; break;
	case 6: month = 151; break;
	case 7: month = 181; break;
	case 8: month = 212; break;
	case 9: month = 243; break;
	case 10: month = 274; break;
	case 11: month = 304; break;
	case 12: month = 334; 
	}
	cout << "\nthere are " << 365 - month - day << " days left til New Year's\n\n";
}

