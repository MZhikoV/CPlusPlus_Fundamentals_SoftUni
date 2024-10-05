#include <iostream>

void checkS(const int arr[], const int & idx, const int & n,const int & sum) {
    for (int i=idx+1; i<n; i++) {
        if ((arr[idx]+arr[i])==sum) {
            std::cout<<arr[idx]<<' '<<arr[i]<<std::endl;
        };
    };
};

int main() {
    int n;
    std::cin>>n;

    int * arr =new int[n];
    if (!arr) {
        std::cout<<"Memory error!"<<std::endl;
    };

    for (int i=0; i<n; i++) {
        std::cin>>arr[i];
    };

    int magicS;
    std::cin>>magicS;

    for (int i=0; i<n; i++) {
        checkS(arr, i, n, magicS);
    };

    delete[] arr;

    system("pause");
    return 0;
}