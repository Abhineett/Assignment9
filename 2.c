#include<stdio.h>
void main()
{
    int ch,a,b;
    while(1){
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice.");
    scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                   printf("Enter two number=");
                   scanf("%d%d",&a,&b);
                   printf("sum is %d",a+b);
                   break;
                case 2:
                   printf("Enter two number=");
                   scanf("%d%d",&a,&b);
                   printf("sub is %d",a-b);
                   break;
                case 3:
                   printf("Enter two number=");
                   scanf("%d%d",&a,&b);
                   printf("multiple is %d",a*b);
                   break;
                case 4:
                   printf("Enter two number=");
                   scanf("%d%d",&a,&b);
                   printf("quotient is %d",a/b);
                   break;
                case 5:
                   break;
                default:
                   printf("invalid choice.");
                   printf("\n\n");
                   printf("please choose a valid function.");
                   break;




            }
            printf("\n");
            if(ch==5)
                break;
    }

}
