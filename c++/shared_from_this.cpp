#include <iostream>
#include <memory> // To use enable_shared_from_this

// The 'enable_shared_from_this' class allows an object to create a shared_ptr referring to itself 

struct Test : public std::enable_shared_from_this<Test>
{
    int x = 10;

    // Constructor
    Test() {std::cout << "Constructor call\n";}

    // Destructor
    ~Test() {std::cout << "Destructor call\n";}

    std::shared_ptr<Test> getTest() 
    {
        return shared_from_this();
    }
};

int main()
{
    std::shared_ptr<Test> ptr = std::make_shared<Test>(); // Use make_shared function to create a shared_ptr called 'ptr'
    std::shared_ptr<Test> ptr2;

    // Print what x is in struct Test
    std::cout << ptr->x << std::endl;

    try
    {
        std::cout << ptr2->x << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // Assign ptr2 to point to Test
    ptr2 = ptr->getTest();

    std::cout << ptr2->x << std::endl;
    
    return 0;
}