#include <iostream>

using namespace std;

int main()
{
	int from, to;
	cin >> from >> to;

	int sum = 0;

	for (int i = from; i <= to; i++) {
		sum += i;
		cout << i << ' ';
	}

	cout << endl;
	cout <<"Sum: "<< sum << endl;

	return 0;
}