#include <iostream>

int fact(int n) {
    if(n==1 || n==0) {
        return 1;
    }
    else {
        return n*fact(n-1);
    }
};

int main() {
    int inp;
    std::cin>>inp;
    int sum=0;
    int initN=inp;
    do {
    int tmp=inp%10;
    inp/=10;
    sum+=fact(tmp);
    }
    while (inp!=0);

    std::cout<<((initN==sum)?"yes":"no")<<std::endl;

    //system("pause");
    return 0;
    
}
