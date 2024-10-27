#include <iostream>
#include <string>

int main() {

    std::string inp;
    std::cin>>inp;

    while (inp!="end") {
        std::string rev;
        int idx=0;
        int size=inp.size();
        rev.resize(size);
        for (int i=inp.size()-1; i>=0; i--) {
            rev[idx]=inp[i];
            idx++;
        };
        std::cout<<inp<<" = "<<rev<<std::endl;
        std::cin>>inp;
    }
    system("pause");
    return 0;
}