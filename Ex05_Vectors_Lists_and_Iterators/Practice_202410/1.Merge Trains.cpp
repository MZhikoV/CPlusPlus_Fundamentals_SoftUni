#include <iostream>
#include <string>
#include <sstream>
#include <vector>

void getWagon(std::vector<int> & wagons) {
    std::string train;
    std::getline(std::cin,train);
    std::istringstream istr(train);
    int curr;
    while (istr>>curr) {
        wagons.push_back(curr);
    };
}

int main() {
    std::vector<int> trainA;
    std::vector<int> trainB;
    std::vector<int> trainC;
    std::vector<char> trainN;

    getWagon(trainA);
    getWagon(trainB);

    std::vector<int>::iterator itA;
    std::vector<int>::iterator itB;

    while(!trainA.empty() && !trainB.empty()) {
        itA=trainA.end()-1;
        itB=trainB.end()-1;
        if(*itA<*itB) {
            trainC.push_back(*itA);
            trainN.push_back('A');
            trainA.pop_back();
        } else {
            trainC.push_back(*itB);
            trainN.push_back('B');
            trainB.pop_back();
        };
    };

    if(trainA.empty() && !trainB.empty()) {
        for(itB=trainB.end()-1; itB==trainB.begin();itB--) {
            trainC.push_back(*itB);
            trainN.push_back('B');
            trainB.pop_back();
        };
    } else if (trainB.empty() && !trainA.empty()) {
        for(itA=trainA.end()-1; itA==trainA.begin();itA--) {
            trainC.push_back(*itA);
            trainN.push_back('A');
            trainA.pop_back();
        };
    };

    std::vector<char>::iterator name;//=trainN.end();
    std::vector<int>::iterator comb;//=trainC.end();


    // for (name=trainN.begin(); name!=trainN.end(); name++) {
    //     std::cout<<*name;
    // }

    for (name=trainN.begin(); name!=trainN.end();name++) {
        std::cout<<*name;
    };
    std::cout<<std::endl;
    
    for (comb=(trainC.end()-1); comb>=trainC.begin();comb--) {
        std::cout<<*comb<<' ';
    };
    std::cout<<std::endl;

    system("pause");
    return 0;
}