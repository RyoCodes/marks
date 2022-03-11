#include <stdio.h>
int main()
{
    int num;
    printf("Enter your marks:");
    scanf("%d",&num);
    if (num==100)
    {
        printf("Congratulations! Perfect score/n");
    }
    else if(num>=75 && num<=99)
    {
        printf("Almost Perfect,congrats/n");
    }
    else if (num>=40 && num<=74)
    {
        printf("Getting there,don't give up!/n");
    }
    else
    {
        printf("Retest needed/n");
    }
    return 0;
}