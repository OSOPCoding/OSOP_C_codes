#include <stdio.h>

// Define a union for representing product sales information.
union Selltype {
    int qty;
    char unit[10];
};

// Define a structure for a product that includes its code, name, and sales information.
struct product {
    int pcode;
    char pname[30];
    union Selltype s;
};

int main() {
    struct product p;
    int f;

    // Input product information.
    printf("Enter product code\n");
    scanf("%d", &p.pcode);
    printf("Enter product name\n");
    scanf("%s", p.pname);

    // Choose between quantity (1) or unit (2).
    printf("Enter 1 for quantity and 2 for unit\n");
    scanf("%d", &f);

    if (f == 1) {
        // Input and store quantity if 'f' is 1.
        printf("Enter quantity\n");
        scanf("%d", &p.s.qty);
    } else {
        // Input and store unit if 'f' is 2.
        printf("Enter unit\n");
        scanf("%s", p.s.unit);
    }

    // Display the product information based on the user's choice.
    printf("Product code = %d\n", p.pcode);
    printf("Name = %s\n", p.pname);

    // Use a conditional operator to print either quantity or unit based on 'f'.
    (f == 1 ? printf("Product quantity = %d\n", p.s.qty) : printf("Product unit = %s\n", p.s.unit));

    return 0;
}
