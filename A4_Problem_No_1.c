/*
1. Write a program to print MySirG 5 times on the screen
*/
#include<stdio.h>
int main()
{
    int a=1,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {
        printf("MySirG\n");
    }
    return 0;
}