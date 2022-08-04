#include <iostream>

int main(){

    // Objects reside in heap region of process memory
    // Each Object has a type and address
    // The address of an integer (which is generally an integer) can be accessed through a pointer to that object

    // (Note : Having unintalized pointers in code is not a good practise. Avoid them.) 

    // Decalre unintialized pointer to an int object 
    int* ip0;

    // Decalre unintialized pointer to an char object
    char* cp0;

    // Create pointer that points to existing int object in memory
    int x = 42;
    int* ip1 = &x;

    // Create pointer that points to existing char object in memory
    char y = 'a';
    char* cp1 = &y;

    // Create a null pointer (pointer that does not point to any object)
    char* np = nullptr;

    // Dereference a char object from char pointer
    char z = 'a';
    char* cp2 = &z;
    std::cout << *cp2;

    // Change the above char value by dereferencing the pointer
    *cp2 = 'b';
    std::cout << z;

    return 0;
}