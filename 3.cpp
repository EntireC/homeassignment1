#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int theint;
	bool b00l = 1;
	while (b00l) {
		long long x;
		cin >> x;
		if (x == 0) {
			cout << "zero\n"; return 0;
		}
		else if (x >= 10000000) cout << "too huge try again\n";
		else { theint = x; b00l = 0; }
	}
	// 1 000 000
	int mil = theint / 1000000;
	int hundredofthou = (theint / 100000) % 10, tensofthou = (theint / 10000) % 10, thou = (theint / 1000) % 10;
	int hundreds = (theint % 1000) / 100, tens = (theint % 100) / 10, ones = theint % 10;
	// cout << mil << endl << hundredofthou << endl << tensofthou << endl << thou << endl << hundreds << endl << tens << endl << ones << endl;
	string final = "";
	switch (mil) {
	case 1:	final += "one million"; break;
	case 2: final += "two million"; break;
	case 3:	final += "three million"; break;
	case 4: final += "four million"; break;
	case 5:	final += "five million"; break;
	case 6: final += "six million"; break;
	case 7:	final += "seven million"; break;
	case 8: final += "eight million"; break;
	case 9: final += "nine million"; 
	}
	switch (hundredofthou) {
	case 1:	final += " one hundred"; break;
	case 2: final += " two hundred"; break;
	case 3:	final += " three hundred"; break;
	case 4: final += " four hundred"; break;
	case 5:	final += " five hundred"; break;
	case 6: final += " six hundred"; break;
	case 7:	final += " seven hundred"; break;
	case 8: final += " eight hundred"; break;
	case 9: final += " nine hundred";
	}
	switch (tensofthou) {
	case 1:	
		switch (thou) {
		case 0:	final += " ten thousand"; break;
		case 1:	final += " eleven thousand"; break;
		case 2: final += " twelve thousand"; break;
		case 3:	final += " thirteen thousand"; break;
		case 4: final += " fourteen thousand"; break;
		case 5:	final += " fifteen thousand"; break;
		case 6: final += " sixteen thousand"; break;
		case 7:	final += " seventeen thousand"; break;
		case 8: final += " eighteen thousand"; break;
		case 9: final += " nineteen thousand";
		}; break;
	case 2: final += " twenty"; break;
	case 3:	final += " thirty"; break;
	case 4: final += " forty"; break;
	case 5:	final += " fifty"; break;
	case 6: final += " sixty"; break;
	case 7:	final += " seventy"; break;
	case 8: final += " eighty"; break;
	case 9: final += " ninety";
	}
	if (tensofthou != 1) switch (thou) {
	case 0:	final += " thousand"; break;
	case 1:	final += " one thousand"; break;
	case 2: final += " two thousand"; break;
	case 3:	final += " three thousand"; break;
	case 4: final += " four thousand"; break;
	case 5:	final += " five thousand"; break;
	case 6: final += " six thousand"; break;
	case 7:	final += " seven thousand"; break;
	case 8: final += " eight thousand"; break;
	case 9: final += " nine thousand";
	}
	switch (hundreds) {
	case 1:	final += " one hundred"; break;
	case 2: final += " two hundred"; break;
	case 3:	final += " three hundred"; break;
	case 4: final += " four hundred"; break;
	case 5:	final += " five hundred"; break;
	case 6: final += " six hundred"; break;
	case 7:	final += " seven hundred"; break;
	case 8: final += " eight hundred"; break;
	case 9: final += " nine hundred";
	}
	switch (tens) {
	case 1:
		switch (ones) {
		case 0:	final += " ten"; break;
		case 1:	final += " eleven"; break;
		case 2: final += " twelve"; break;
		case 3:	final += " thirteen"; break;
		case 4: final += " fourteen"; break;
		case 5:	final += " fifteen"; break;
		case 6: final += " sixteen"; break;
		case 7:	final += " seventeen"; break;
		case 8: final += " eighteen"; break;
		case 9: final += " nineteen";
		}; break;
	case 2: final += " twenty"; break;
	case 3:	final += " thirty"; break;
	case 4: final += " forty"; break;
	case 5:	final += " fifty"; break;
	case 6: final += " sixty"; break;
	case 7:	final += " seventy"; break;
	case 8: final += " eighty"; break;
	case 9: final += " ninety";
	}
	if (tens != 1) switch (ones) {
	case 1:	final += " one"; break;
	case 2: final += " two"; break;
	case 3:	final += " three"; break;
	case 4: final += " four"; break;
	case 5:	final += " five"; break;
	case 6: final += " six"; break;
	case 7:	final += " seven"; break;
	case 8: final += " eight"; break;
	case 9: final += " nine";
	}
	cout << final << endl;
	return 0;
}

