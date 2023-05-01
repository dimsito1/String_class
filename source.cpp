#include "string.hpp"

int main() {
    std::cout << "Program started." << std::endl;
    String f("something");
    String d("Dimi");
    String s("slav");

    const char arr[] = "foodfgdfgdf";
    String temp2;
    temp2 = arr;
    std::cout << arr << std::endl;
    String temp("temp");


    std::cout << "Program ended." << std::endl;
    return 0;
}