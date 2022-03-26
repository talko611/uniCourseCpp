#include <iostream>
#include "Array.h"
int main() {
    Array arr1;
    arr1[1] = 5;
    arr1[0] = 1;

    std::cout << arr1 << std::endl;
    std::cout <<"arr[0] = " <<  arr1[0] << std::endl;
    std::cout << arr1 << std::endl;
}
