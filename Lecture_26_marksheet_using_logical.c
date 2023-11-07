#include<stdio.h>

int main()
{
    
    int p,c,m,total;
    float per;
    printf("Enter marks for Physics: ");//Prompt user to enter mark of physics
    scanf("%d", &p);// read value of p from user

    printf("Enter marks for Chemistry: ");//Prompt user to enter mark of Chemistry
    scanf("%d", &c);// read value for c from user

    printf("Enter marks for Mathematics: ");//Prompt user to enter mark of Mathematics
    scanf("%d", &m);// read value for m from user

    total = p+c+m;
    per = total/3.0;

    printf("total marks obtained = %d\n",total);
    printf("percentage = %f\n",per);

    if((p<33 && c<33) || (p<33 && m<33) || (c<33 && m<33))// Check if the student failed in 2 or more subjects and determine their division based on marks
       printf("Failed");
    else
    {
        if(p<33)
          printf("supply in physics\n");
        else
        {
            if(c<33)
              printf("supply in chemistry\n");
            else
            {
                if(m<33)
                  printf("supply in maths\n");
                else
                {
                    if(per>=60)
                       printf("pass in I division\n");
                   else
                    {
                        if(per>=45)
                          printf("pass in II division\n");
                        else
                        {
                            if(per>=33)
                              printf("pass in III division\n");
                            else 
                               printf("student failed");                        }
                    }
                }
            }
        }
    }
  return 0;
}
