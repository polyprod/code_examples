#include <iostream> 
using std::cout; 
  
class Test { 
public: 
  int x; 
  mutable int y; 
  Test() { x = 4; y = 10; } 
}; 
int main() 
{ 
    const Test t1; 
    t1.y = 20; // We can change this variable even though class object is const. 
               // This is possible because the variable is mutable.
    cout << t1.y; 
    return 0; 
}