int main() {
    
    // Remark : Generally, in Modern C++, one should prefer std::array & std::vector over the raw arrays described here.

    // Declare an array of char type with known size
    char a[5];

    // Declare an array of int type with known size
    int b[5];

    // Declare and initialize an array in single statement
    int c[6] = { 1, 2, 3, 5, 7, 11};

    // Modify 4th element in the above array
    c[3] = 13;

    return 0;
}

