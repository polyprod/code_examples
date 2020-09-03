#include <stdio.h>
#include <stdlib.h>

typedef void *HANDLE;

typedef struct
{
    int age;
} PERSON;

void init(HANDLE *handle)
{
    PERSON *p = malloc(sizeof(*p));

    printf("Address of person: %p\n", p);

    // Set handle to address of person
    *handle = p;
}

void set_age(HANDLE handle, int age)
{
    PERSON *p = (PERSON *)handle; // Declare struct variable pointer
 
    p->age = age;
}

int get_age(HANDLE handle)
{
    PERSON *p = (PERSON *)handle; // Declare struct variable pointer

    return p->age;
}

int main(void)
{
    HANDLE handle; // Handle variable declaration

    init(&handle);

    printf("Address of handle: %p\n", handle);

    set_age(handle, 27);
    printf("%d\n", get_age(handle));

    set_age(handle, 32);
    printf("%d\n", get_age(handle));

    return 0;
}
