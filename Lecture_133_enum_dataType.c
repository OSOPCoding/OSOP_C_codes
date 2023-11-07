#include <stdio.h>

// Define an enumeration for weekdays with specific values
enum Weekdays {
    sun,  // 0
    mon,  // 1
    tue,  // 2
    thu,  // 3
    fri,  // 4
    sat   // 5
};

int main() {
    enum Weekdays wd;
    
    // Assign the value "tue" to the enum variable wd
    wd = tue;
    
    // Print the value of wd, which corresponds to Tuesday
    printf("Weekday = %d", wd);
    
    return 0;
}
