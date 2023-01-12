/*
2. Write a program to print the first 10 natural numbers.
*/
#include<stdio.h>
int main()
{
    int a=1,i;
    printf("\nEnter a number: ");
    scanf("%d",&i);
    while(a<=i)
    {
        printf("%d\n ",a);
        a++;
    }
}