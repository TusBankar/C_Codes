
//13. Write a program to delete no.of  bits from particular position in a given number.
    //   Input the no.of bits, at runtime.
  //      Ex:  Suppose  num  =  100;
//		         It's Binaray is     00000000000000000000000001100100
//		         delete 2 bits from 4th position
//		         then result   is     00000000000000000000000000011100
#include<stdio.h>
main()
{
int i,p,q,e,pos;
printf("Enter num,pos\n");
scanf("%d%d",&i,&pos);

q=i;
for(p=31;p>=0;p--)
printf("%d",i>>p&1);
printf("\n");

for(p=31;p>=0;p--)
{
if(i==pos)
continue;
printf("%d",i>>p&1);
}
printf("\n");
