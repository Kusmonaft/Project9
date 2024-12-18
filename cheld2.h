#pragma once
#include"cheld.h"

using namespace std;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>

class child2 : public child<T1, T2, T3, T4> {
public:
    T5 num_5;
    T6 num_6;

    child2(T1 num_1P, T2 num_2P, T3 num_3P, T4 num_4P, T5 num_5P, T6 num_6P) : child<T1, T2, T3, T4>(num_1P, num_2P, num_3P, num_4P), num_5(num_5P), num_6(num_6P) {}

    void display() 
    {
        child<T1, T2, T3, T4> print_num();
        cout << "„лен класса 5: " << num_5 << '\n' << "„лен класса 6: " << num_6 << '\n';
    }
};

