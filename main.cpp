/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 13, 2018, 9:17 PM
 */

#include <iostream>

template<typename T>
class Print {
private:
    int x;
public:
    static T var;

    void printVal() {
        std::cout << ++var << '\n';
    }
};

template<typename T> // static initialization
T Print<T>::var = 0;

int main() {

    Print<int> i;
    i.printVal();

    Print<int> j;
    j.printVal();

    Print<float> f;
    f.printVal();

    return 0;
}

