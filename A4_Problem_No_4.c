/*
5. Write a program to print the first 10 odd natural numbers in reverse order.
*/
#include<stdio.h>
int main()
{
   int n;
   printf("\nEnter a natural number");
   scanf("%d",&n);

   while(n)
   {
        printf("%d ",2*n-1);
        n--;
   }
return 0;
}