#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

	int num = stoi(input);
	int factSum = 0;
	for (size_t i = 0; i < input.length(); i++)
	{
		int fact = 1;
		int a= input[i]-48;

		for (int j = 1; j <= a; j++) {
			fact *= j;
		}
		factSum += fact;
	}

	if (num == factSum) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}