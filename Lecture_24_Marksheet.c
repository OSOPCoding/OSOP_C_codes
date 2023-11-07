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

      if (per >= 60) // Here we check the division of student with the use of nested if else 
          printf("Pass in I division\n");
      else
      {
          if (per >= 45) 
              printf("Pass in II division\n");
          else
          {
              if (per >= 33)  
                  printf("Pass in III division\n");
              else
                  printf("Student failed");  
          }
      }

  return 0; 
}