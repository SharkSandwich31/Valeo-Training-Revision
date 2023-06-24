#include <iostream>
#include <stdio.h>

struct test {
    int y;
    void display () {
        std::cout << "AbdelRahman" << std::endl;
    }
};

struct data {
    int x=2 ;
    void function () {
        std:: cout << "hello world" << std::endl;
    }
};

int main () {

    data d;
    test f;
    std:: cout << d.x << std:: endl;
    d.function();
    f.display();

}