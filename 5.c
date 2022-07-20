#include<stdio.h>
void main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);
    switch(a)
    {
         case 1:
             printf("good");
         case 2:
             printf("best");
         case 3:
             printf("better");
         default:
             printf("invalid");


    }
}
