#include <stdio.h>
int main ()
{
    int a=1,count=0;
    while (count < 50)
    {
        printf("%d\n",a);
        a=a+3;
        count++;
    }
    return 0;
}