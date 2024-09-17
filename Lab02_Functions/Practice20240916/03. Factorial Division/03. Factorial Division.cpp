#include <iostream>
#include <iomanip>

double fac(int a) {
	if (a == 1) {
		return 1;
	}
	else {
		return a*fac(a - 1);
	};
}

//void print(int a, int b) {
//	std::cout << std::fixed << std::setprecision(2) <<
//		(double)((double)fac(a) / fac(b)) << std::endl;
//}

void print(int a, int b) {
	double result = fac(a)/fac(b);
	std::cout << std::fixed << std::setprecision(2) << result<< std::endl;
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	print(a, b);
}
