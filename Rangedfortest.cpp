#include <iostream>
#include <stdio.h>

int main () {


    int arr[3] = {1, 2 , 3};
    for (int i =0; i<3; i++) {
        std::cout << arr[i] << std::endl;
    }

    //ranged for loop
    for(int i : arr) {
        std::cout << i./ << std::endl;
    }
    return 0;
}