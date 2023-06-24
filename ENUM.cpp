#include <iostream>


enum class Data : unint8_t
{
    SUCESS,
    FAIL,
    DEFAULT

}; 
enum class Car : uint8_t
{
    BUS,
    DEFAULT
};

int main () {

    Data d = Data::SUCESS;

    //std::cout<< d << std::endl;

    //conversion
    int x = static_cast<int>(Data::SUCCESS);

    //different enum with same value
    Car c = Car::DEFAULT;
    Data d4 = Data::DEFAULT;
    //casting
    Data d2 = static_cast<Data>(2);

    //size
    std::cout << sizeof c << std::endl;

    return 0;
}