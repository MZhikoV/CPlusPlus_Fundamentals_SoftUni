#include <iostream>
#include <string>
#include <sstream>

int main() {

    std::string inp;
    std::getline(std::cin,inp);

    while (inp!="end") {
        std::ostringstream rev;

        for (int i=inp.size()-1; i>=0; i--) {
            rev<<inp[i];
        };
        std::cout<<inp<<" = "<<rev.str()<<std::endl;
        std::cin>>inp;
    }
    system("pause");
    return 0;
}