#include <iostream>

class Test
{
private:
    int x;

public:
    // Constructor
    Test(int x) {this->x = x;}

    // Methods
    void change(Test *t) {*this = *t;} // Here we can't assign a pointer to a this pointer (this = *t)

    void print() {std::cout << "x = " << x << std::endl;}

};
int main()
{
    // Create object
    Test obj(5);

    obj.print(); // Output will be 5

    // Declare pointer to class
    Test *ptr = new Test(10);
    obj.change(ptr);

    obj.print(); // Now output will be 10

    return 0;
}