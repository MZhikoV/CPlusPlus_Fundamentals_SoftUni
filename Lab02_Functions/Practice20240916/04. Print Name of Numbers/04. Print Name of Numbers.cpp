#include <iostream>
#include <cstring>
#include <cmath>

void units(int a) {
    switch (a) {
    case 1: std::cout << "one"; break;
    case 2: std::cout << "two"; break;
    case 3: std::cout << "three"; break;
    case 4: std::cout << "four"; break;
    case 5: std::cout << "five"; break;
    case 6: std::cout << "six"; break;
    case 7: std::cout << "seven"; break;
    case 8: std::cout << "eight"; break;
    case 9: std::cout << "nine"; break;
    case 0: std::cout << "zero"; break;
    }
}

void tens(int a) {
    switch (a) {
    case 2: std::cout << "twenty "; break;
    case 3: std::cout << "thirty "; break;
    case 4: std::cout << "fourty "; break;
    case 5: std::cout << "fifty "; break;
    case 6: std::cout << "sixty "; break;
    case 7: std::cout << "seventy "; break;
    case 8: std::cout << "eighty "; break;
    case 9: std::cout << "ninety "; break;
    }
}

void teens(int a) {
    switch (a) {
    case 0: std::cout << "ten"; break;
    case 1: std::cout << "eleven"; break;
    case 2: std::cout << "twelve"; break;
    case 3: std::cout << "thirteen"; break;
    case 4: std::cout << "fourteen"; break;
    case 5: std::cout << "fifteen"; break;
    case 6: std::cout << "sixteen"; break;
    case 7: std::cout << "seventeen"; break;
    case 8: std::cout << "eighteen"; break;
    case 9: std::cout << "nineteen"; break;
    }
}

int main()
{
    char* inp=new char[5];
    std::cin >> inp;

    int len = strlen(inp);
    int num = atoi(inp);

    for (int i = len; i > 0; i--) {
        int temp = 0;
        if (i != 1) {
            temp = num / (pow(10,(i - 1)));
            num =num% (int)(pow(10, (i - 1)));
        }
        else {
            temp = num;
        };
        //if (i != 1 && temp > 9) {
            switch (i) {
            case 4: {
                if (temp != 0) {
                    units(temp);
                    std::cout << " thousand ";
                }
            } break;
            case 3: {
                if (temp != 0) {
                    units(temp);
                    std::cout << " hundred ";
                }
            } break;
            case 2: {
                if (temp == 1) {
                    teens(num);
                    return 0;
                }
                else {
                    if (temp != 0) {
                        tens(temp);
                    };
                };
            } break;
            case 1: units(temp); break;
            };
       /* }
        else {
            units(temp);
            break;
        }*/
    };
    std::cout << std::endl;

    delete[] inp;
    return 0;
}