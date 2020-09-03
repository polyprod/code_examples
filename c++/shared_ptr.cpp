#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!\n";
    }
    ~Entity()
    {
        std::cout << "Destroyed Entity!\n";
    }
};

int main()
{
    // Declare shared pointer of type Entity class
    std::shared_ptr<Entity> ptr1;

    // Now we print the number of shared_ptr objects ptr1 is pointing to
    std::cout << "Number of objects ptr1 is pointing to: " << ptr1.use_count() << std::endl;

    ptr1 = std::make_shared<Entity>(); // Assign ptr1 to point to Entity class

    // Now we print the number of shared_ptr objects ptr1 is pointing to
    std::cout << "Number of objects ptr1 is pointing to: " << ptr1.use_count() << std::endl;

    // A new shared_ptr declaration
    std::shared_ptr<Entity> ptr2;

    ptr2 = ptr1; // Assign ptr2 to point to whatever ptr1 is pointing to

    // Now we print the number of shared_ptr objects ptr1 is pointing to
    std::cout << "Number of objects ptr1 is pointing to: " << ptr1.use_count() << std::endl;

    ptr2.reset(); // Now ptr2 is no longer pointing to the Entity class

    // Now we print the number of shared_ptr objects ptr1 is pointing to
    std::cout << "Number of objects ptr1 is pointing to: " << ptr1.use_count() << std::endl;

    return 0;
}