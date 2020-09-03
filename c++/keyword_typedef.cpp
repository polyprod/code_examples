#include <iostream>

int main()
{
    // Data type aliases using typedef and using
    typedef int integer;
    using dbl = double;

    integer num = 10;
    dbl number = 10.17;

    
    
    std::cout << "Hello world!" << std::endl;
    std::cout << num << std::endl;
    std::cout << number << std::endl;

    return 0;
}