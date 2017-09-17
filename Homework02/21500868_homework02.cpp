#include <iostream>

int factorial(int a);

int number;

int main()
{
    int result;
    
    std::cout << "Initial value of the global variable:" << number << std::endl;
    std::cout << "Initial value of the local variable:" << result << std::endl;
    
    std::cin >> number;
    if(number >= 0){
        result = factorial(number);
        std::cout << number << "! =" << result << std::endl;
    } else {
        std::cout << "ERROR: negative integer" << std::endl;
    }
    
}

int factorial(int a) {
    
    if(a == 1)
        return 1;
    else
        return factorial(a -1)*a;
        
}