/*
    Write a program that defines and initializes an array of five doubles. 
    Change and print the values of the first and last array elements.
*/

#include <iostream>

int main(){
    double d[5] = {1.0, 2.0, 3.0, 4.0, 5.0}; // Declare and initialize array
    d[0] = 10.0; // Change first element
    d[4] = 20.0; // Change last element
    std::cout << d[0] << '\n'; // print first element
    std::cout << d[4] << '\n'; // print last element
    return 0;
}

