#include <iostream>
#include <stdio.h>

int main () {

    int x{10};
    int &y = x;

    y=3;
    std:: cout << "ref y = " << y << "x= " << std:: endl;

    //change reference
    int n = 0;
    y=n;
    return 0;

}