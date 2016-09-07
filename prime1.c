#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i,j,temp,count=0;
printf("Enter the value n1,n2");
scanf("%d%d",&n1,&n2);
if(n2<2)
{
printf("There the no of primes%d",n2);
exit(0);
}
printf("prime no is");
temp=n1;
if(n1%2==0)
{
n1++;
}
for(i=n1;i<=n2;i=i+2)
{
flag=0;
for(j=2;j<=i;j++)
{
if((i%j))==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",i);
count++;
}
}
printf("number of primes %d&%d=%d",temp,n2,count);
}
