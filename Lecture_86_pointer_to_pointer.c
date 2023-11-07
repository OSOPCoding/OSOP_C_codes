#include<stdio.h>

void exch1(int *, int *);
void exch2(int **, int **);

int main()
{
    int a = 20, b = 40;
    
    // Call the exch1 function to exchange the values of 'a' and 'b'
    exch1(&a, &b);
    
    printf("a = %d and b = %d", a, b);
    return 0;
}

// Function to exchange the values of two integers using exch2
void exch1(int *ptr1, int *ptr2)
{
    exch2(&ptr1, &ptr2);
}

// Function to exchange the values pointed by two integer pointers
void exch2(int **p1, int **p2)
{
    int temp;
    temp = **p1;  
    **p1 = **p2;  
    **p2 = temp;  
}
