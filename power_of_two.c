// WAP to find the given number is power of 2 or not.
#include<stdio.h>
main()
{
int i;
printf("Enter num\n");
scanf("%d",&i);

i=i&i-1;

if(i==0)
printf("Power of two\n");
else
printf("Not power of two\n");
}
