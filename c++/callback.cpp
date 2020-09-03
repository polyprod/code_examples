// This is an example of using a function pointer to construct a callback function

#include <iostream>

typedef bool (*FuncPtrBoolInt)(int, std::string);

// This is our callback function
bool updateProgress(int pct, std::string msg)
{
    std::cout << pct << msg;
    return true;
}

// A function the runs for a while
void longOperation(FuncPtrBoolInt f) // Parameter is pointer to updateProgress function
                                     // So every time we call f, it's our callback from this function
{
    for (long l = 0; l < 100000000; l++)
    {
        if (l % 10000000 == 0)
        {
            f(l / 1000000, "% complete...\n"); // Our callback
        }
        
    }
}

int main()
{
    longOperation(updateProgress);
    return 0;
}