//Write a programme for swapping first and last nibbles in a given integer.
//      Ex: Suppose num = 10
#include<stdio.h>
main()
{
int i,p,r,e,q,m,n;
printf("Enter num\n");
scanf("%d",&i);

for(p=31;p>=0;p--)
printf("%d",i>>p&1);
printf("\n");

for(r=0,e=28;r>=3;r++,e--)
{
m=i>>r&1;
n=i>>e&1;
if(m!=n)
{
i=i^1<<r;
i=i^1<<e;
}
}
for(p=31;p>=0;p--)
printf("%d",i>>p&1);
printf("\n");
}
