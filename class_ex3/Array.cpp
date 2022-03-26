//
// Created by Tal Koren on 24/03/2022.
//

#include "Array.h"

std::ostream &operator<<(std::ostream &out, const Array &a) {
    for(auto i : a.arr){
        std::cout << i << ' ';
    }
    std::cout << '\n' << "sum = " << a.getSum();
    return out;
}

void Array::calcSum() const {
    std::cout << "in "
    sum = 0;
    for(auto i : arr){
        sum += i;
    }
}
