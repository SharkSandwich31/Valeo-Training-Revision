#include <iostream>

int getFourthBit(int num) {
    // Right shift the number by 3 to bring the 4th bit to the 0th position
    int shiftedNum = num >> 3;
    
    // Extract the value of the 0th bit using bitwise AND with 1
    int fourthBit = shiftedNum & 1;
    
    return fourthBit;
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    int fourthBit = getFourthBit(num);
    std::cout << "The value of the 4th bit is: " << fourthBit << std::endl;
    
    return 0;
}
