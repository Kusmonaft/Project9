#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <io.h>

using namespace std;
template <typename T1, typename T2>

class base {
public:
    T1 num1;
    T2 num2;

    base(T1 num1_P, T2 num2_P) : num1(num1_P), num2(num2_P) {}
    virtual ~base() {}

    void print() {
        cout << "„лен класса 1: " << num1 << '\n' << "„лен класса 2: " << num2 << '\n';
    }
};
