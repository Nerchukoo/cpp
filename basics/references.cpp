int main(){
    
    // Reference is an alias to object in memory. '&' is used to create it.

    int x = 42;

    // create a reference to x
    int& y = x;

    x = 84; // y also equals 84 now

    y = 168; // x also equals 168 now

    // a 'const-reference' could be used to create a read-only alias to an object
    const int& z = x;

    // Here z is read-only version of x

    return 0;
}