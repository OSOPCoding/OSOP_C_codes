#include<stdio.h>

int main()
{

    int p,c,m,e,h,total;
    float per;
    printf("Enter marks for Physics: ");//Prompt user to enter mark of physics
    scanf("%d", &p);// read value of p from user

    printf("Enter marks for Chemistry: ");//Prompt user to enter mark of Chemistry
    scanf("%d", &c);// read value for c from user

    printf("Enter marks for Mathematics: ");//Prompt user to enter mark of Mathematics
    scanf("%d", &m);// read value for m from user

    printf("Enter marks for English: ");//Prompt user to enter mark of English
    scanf("%d", &e);// read value for e from user

    printf("Enter marks for History: ");//Prompt user to enter mark of History
    scanf("%d", &h);// read value for h from user

    total = p+c+m+e+h;
    per = total/5.0;

    printf("total marks obtained = %d\n",total);
    printf("percentage = %f\n",per);
     
    if(per>=60)// Here we chech the division of student with use of ladder if else
      printf("passed by I division");
    else if(per>=45)
    {
        printf("passed by II division");
    }
    else if(per>=33) 
    {
        printf("passed by III division");
    }
    else 
      printf("Failed"); 
    
    return 0;
}