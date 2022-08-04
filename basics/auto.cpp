int main(){

    // when we use 'auto' as type of an object at declaration, the type of object is deduced from what is being assigned to it

    // compiler deduces the type from RHS
    auto c = 'a'; // c is a char
    auto i = 42;  // i is an int

    // Here RHS can also be an expression
    auto d = (40.2/8.3); // d is a double  

    // auto can be combined with reference and const
    auto& x = i; // x is an int alias to i
    const auto a = 3.1; // a is a read only double

    // auto is often used to save typing lengthy 'object-type' names 

    return 0;
}