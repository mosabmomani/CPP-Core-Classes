#pragma once
#include <iostream>
#include "clsdate.h"
#include"clsString.h"
using namespace std;
class clsInputValidate
{
public:
	static bool IsNumberBetween(short value, short from, short to) {
		return (value >= from && value <= to) ? true : false;
	}
	static bool IsNumberBetween(int value, int from,int to) {
		return (value >= from && value <= to) ?true :  false;
	}
	static bool IsNumberBetween(double value, double from, double to) {
		return (value >= from && value <= to) ? true : false;
	}
	static bool IsNumberBetween(float value, float from, float to) {
		return (value >= from && value <= to) ? true : false;
	}
	static bool IsDateBetween(clsDate datechech,clsDate datefrom,clsDate dateto) {
		return clsDate::IsDateBetween(datechech, datefrom, dateto);
	}
	static int ReadIntNumber(string massage = "invald number,enter again\n") {
		int number;
		
		while(!(cin >> number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << massage;
		}
		return number;
	}
	static double ReadDblNumber(string massage="invald number,enter again\n") {
		double number;

		while (!(cin >> number)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << massage;
		}
		return number;
	}
	static int  ReadIntNumberBetween(int from, int to, string massage = "number is not in the range,enter again") {
		int number = ReadIntNumber();
		while (number<from || number>to) {
			cout << massage;
			number = ReadIntNumber();
		}
		return number;
	}
	static double ReadDblNumberBetween(double from, double to,string massage= "number is not in the range,enter again") {
		double number = ReadDblNumber();
		while (number<from || number>to) {
			cout << massage;
			number = ReadDblNumber();
		}
		return number;
	}
	static bool IsValideDate(clsDate date) {
		return clsDate::IsValidDate(date);
	}

};

