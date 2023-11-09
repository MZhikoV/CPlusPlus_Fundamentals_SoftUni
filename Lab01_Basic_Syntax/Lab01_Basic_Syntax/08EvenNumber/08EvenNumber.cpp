// 08EvenNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int num;

	while (true) {
		cin >> num;

		if (num % 2 != 0) {
			cout << "Please write an even number." << endl;
		}
		else {
			cout << "The number is: " << abs(num) << endl;
			break;
		}
	}
	return 0;
}