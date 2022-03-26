//
// Created by Tal Koren on 24/03/2022.
//

#ifndef CLASS_EX3_ARRAY_H
#define CLASS_EX3_ARRAY_H

#include <iostream>

class Array {
    static constexpr size_t SIZE = 10;
    int arr[SIZE] {};
    mutable long sum = 0;
    mutable bool isSumUpdated = true;

    class ElementProxy {
        int& element;
        bool& isSumUpdated;

    public:
        int operator =(int val){
            if(val != element){
                element = val;
                isSumUpdated = false;
            }
            return val;
        }
        operator int() const{
            return element;
        }

    public:
        ElementProxy(int& element, bool& isSumUpdated ) : element(element), isSumUpdated(isSumUpdated){}
    };

public:
    ElementProxy operator[](size_t index){
        return  {arr[index], isSumUpdated};
    }
    int operator [](size_t index) const{
        return arr[index];
    }
    size_t getSize() const{return SIZE;}
    friend std::ostream & operator<<(std::ostream& out, const Array& a);
    long getSum() const {return sum;}
    void calcSum()const;
};


#endif //CLASS_EX3_ARRAY_H
