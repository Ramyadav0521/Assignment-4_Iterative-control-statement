/*
10. Write a program to print a table of 5.
*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d \n",i*5);
    }
    return 0;
}