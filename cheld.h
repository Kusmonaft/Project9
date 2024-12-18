#pragma once
#include"basee.h"

template <typename T1, typename T2, typename T3, typename T4>
class child : public base<T1, T2> {
public:
    T3 value3;
    T4 value4;

    child(T1 value1_P, T2 value2_P, T3 value3_P, T4 value4_P) : base<T1, T2>(value1_P, value2_P), value3(value3_P), value4(value4_P) {}

    void preeeeent() {
        base<T1, T2> print_num();
        cout << "„лен класса 3: " << value3 << '\n' << "„лен класса 4: " << value4 << '\n';
    }
};

