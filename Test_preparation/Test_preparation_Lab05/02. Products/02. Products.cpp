#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

using namespace std;

//function to print integer vector/list
void printIntV(list<string>& v1) {
	int i = 1;
	for (string num : v1) {
		cout << i << ". " << num << endl;
		i++;
	}
	//cout << endl;
}


int main()
{
	int n;
	cin >> n;

	list<string> inp;

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		inp.push_back(input);
	}

	inp.sort();

	printIntV(inp);

	return 0;
}