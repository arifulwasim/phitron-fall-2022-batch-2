#include <stdio.h>

int main()
{
    int a;
    printf("enter your number : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}