//WAP to find the given number is even or odd using bitwise operators.
#include<stdio.h>
main()
{
int i;
printf("Enter num\n");
scanf("%d",&i);
i=i&1;
if(i==0)
printf("Even\n");
else
printf("Odd\n");
}
