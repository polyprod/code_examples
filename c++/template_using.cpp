#include <iostream>

// Define one generic function for all data types

template <typename T> // Declaration of generic data type called "T"
T myMax(T x, T y)
{
    return (x > y)? x: y;
}

int main()
{
    std::cout << myMax<int>(3, 7) << std::endl;
    std::cout << myMax<double>(3.0, 7.0) << std::endl;
    std::cout << myMax<char>('g', 'e') << std::endl;

    return 0;
}