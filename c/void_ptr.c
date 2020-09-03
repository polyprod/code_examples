#include <stdio.h>

int main()
{
    int a = 7;
    float b = 7.6;

    int* pointer; // Declaration of an integer pointer

    pointer = &a; // Assign a memory address to the pointer

    printf("Memory address of integer a: %p\n", &a);
    printf("Memory address of pointer: %p\n", pointer);
    printf("The value of the variable (a) the pointer points to: %d\n", *pointer);
    
    // An example of a void pointer
    void* p;

    p = &a;
    printf("Integer variable = %d\n", *((int*)p) );
    p = &b;
    printf("Float variable = %f", *((float*)p) );

    return 0;
}