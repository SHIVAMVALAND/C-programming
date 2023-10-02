#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);

    printf("enter 2nd number: ");
    scanf("%d",&b);

    char ch; //ch='+','-','*','/'.
    printf("plese choice an oprator('+','-','*','/'): ");
    scanf(" %c",&ch);
    switch(ch) 
    {
        case '+':
        printf("addition:%d",a+b);
        break;

        case '-':
        printf("subtraction:%d",a-b);
        break;

        case '*':
        printf("multiplication:%d",a*b);
        break;

        case '/':
      if (b != 0) 
        {
            printf("%d", a/b);
        }
        else
        {
            printf("Error: Division by zero!\n");
        }
        break;

        default:
        printf("Invalid operation. Please choose +, -, *, or /\n");
        break;
    } 
    return 0;
}