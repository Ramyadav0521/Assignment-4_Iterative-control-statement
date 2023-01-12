/*
7. Write a program to print the first 10 even natural numbers in reverse order
*/
#include<stdio.h>
int main()
{
    int a,n;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    for(a=2; a<=n; a++)
    {
        printf("%d \n",a*2);
    }
    return 0;
}