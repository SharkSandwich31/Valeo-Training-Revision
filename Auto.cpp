#include <iostream>
#include <stdio.h>

int main () {

    auto var = 10;
    auto var2 = 10.5F;
    auto var3 = 'a';  //sizeof('a') -> sizeof(int)
    auto var4= "constantchar";
    auto var5= std::string("hello string");

    //with const
    const int x = 10;
    auto var6 = x;// var is int
    //to make it const
    const auto var7 = x;

    //with reference cont
    auto &var8 = x;
    auto ptr = &x;
    



}