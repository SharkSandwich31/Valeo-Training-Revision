#include <stdio.h>
#include <iostream>

void fun (int x, int y){

    std:: cout << "integer, integer  "  << std::endl;

}

void fun (int x, float y) {
    std:: cout << "integer, float"  << std::endl;

}

int main () {

    fun(2,3);
    fun(2,3.5F);
    return 0 ;

}