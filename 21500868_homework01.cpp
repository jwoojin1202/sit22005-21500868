#include <iostream>

int main() {
    
    short b;
    char ch;
    float f;
    
    std::cout << "char: " << sizeof(ch) << std::endl;
    std::cout << "short int: " << sizeof(b) << " int: " << sizeof(int) << " long int: "<< sizeof(long) << std::endl;
    std::cout << "float : " << sizeof(f) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    
    
}
