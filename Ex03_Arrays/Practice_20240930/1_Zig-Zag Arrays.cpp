#include <iostream>

void printArr(int arr[], int n) {
    bool isFirst=true;
    for (int i=0; i<n; i++) {
        if (!isFirst) {
            std::cout<<' ';
        } else {
            isFirst=false;
        }
        std::cout<<arr[i];
        };
    std::cout<<std::endl;
}


int main() {

    int cols;
    std::cin>>cols;

    if (cols<=0) {
        return 0;
    };

    int * arr1=new int[cols];
    int * arr2=new int[cols];

    for (int i=0; i<cols; i++) {
        std::cin>>arr1[i];
        std::cin>>arr2[i];
    };

    std::cout<<std::endl<<std::endl;

    printArr(arr1,cols);
    printArr(arr2,cols);

    delete[] arr1;
    delete[] arr2;

    system ("pause");
    return 0;
}