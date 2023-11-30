#include <iostream>

using namespace std;

int main()
{
	string input;
	cin >> input;

	if (input == "England" || input == "USA") {
		cout << "English" << endl;
	}
	else if (input == "Spain" || input == "Argentina" || input == "Mexico") {
		cout << "Spanish" << endl;
	}
	else {
		cout << "unknown" << endl;
	}
	return 0;
}
