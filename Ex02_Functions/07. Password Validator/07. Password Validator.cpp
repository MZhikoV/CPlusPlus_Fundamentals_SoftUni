#include <iostream>

using namespace std;

bool passCheck(string a, bool& isLen, bool& isLetter, bool& isdigits) {
	int digitCount = 0;
	if (a.length() < 6 || a.length() > 10) {
		isLen = false;
	}
	for (int i = 0; i < a.length(); i++) {
		if (!isalpha(a[i]) && !isdigit(a[i])) {
			isLetter = false;
		}
		if (isdigit(a[i])) {
			digitCount++;
		}
	}
	if (digitCount < 2) {
		isdigits = false;
	}
	return (isLen && isLetter && isdigits);
}

int main()
{
	string pass;
	cin >> pass;

	bool isLen = true, isLetter = true, isdigits = true;

	if (passCheck(pass, isLen, isLetter, isdigits)) {
		cout << "Password is valid" << endl;
		return 0;
	}
	if (!isLen) {
		cout << "Password must be between 6 and 10 characters" << endl;
	}
	if (!isLetter) {
		cout << "Password must consist only of letters and digits" << endl;
	}
	if (!isdigits) {
		cout << "Password must have at least 2 digits" << endl;
	}
	return 0;
}


