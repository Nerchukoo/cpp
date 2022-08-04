#include <string>
#include <iostream>

int main() {

    // std::string is implemented using templates

    // Define a string
    std::string s = "pana";

    // concatination : with another string
    s += "roma";

    // concatination : with a char
    char c = '!';
    s += c;

    // Access Characters : Method 1
    char c0 = s[0];  // 'p'

    // Access Characters : Method 2
    char ch0 = s.at(0) // 'p'

    std::string s0 = 'manoroma!';

    // comapring strings
    if (s == s0){
        // strings are equal
    }else{
        // strings are not equal
    }

    // read a string with whitespaces from stdin
    std::string input;
    std::getline(std::cin, input);

    // pointer to string
    const char* sp = s.c_str();
    // sp is pointer of the first character in the string 's'

    // substring
    // .substr(start_index, length);
    std::string s_substring = s.substr(6,2); // 'ma'

    // finding substring
    std::string s1 = "Hakuna matata!";
    std::string to_find = "tata";

    std::string::size_type result = s1.find(to_find);

    if(result == std::string::npos){
        // substring not found
    }else{
        std::cout << "substring found at position : " << result;
    }
    
    return 0;
}