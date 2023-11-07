#include <stdio.h>

int main() {
    // Define an alias "size" for the data type "int"
    typedef int size;
    
    // Declare and initialize a variable "a" with the "size" data type
    size a = 10;
    
    // Print the value of "a"
    printf("a = %d", a);
    
    return 0;
}
