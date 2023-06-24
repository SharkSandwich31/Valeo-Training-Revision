#include <iostream>
#include <stdio.h>

int main () {

    wchar_t x = '/';
    std::cout << sizeof(x) << " " << x << std::endl;
    return 0;
}