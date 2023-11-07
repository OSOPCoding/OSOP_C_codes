#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fptr =NULL;
    char ans,str[30];
    fptr = fopen("C:\\Test\\Test1.txt","w");
    if(fptr == NULL)
    {
        printf("File is not created ");
        return 1;
    }
    
    do
    {
        printf("\nEnter different string\n");
        gets(str);
        fputs(str,fptr);
        printf("Do you want to continure\n");
        ans = getche();
    } while (ans=='Y' || ans== 'y');
    fclose(fptr);
    return 0;
}