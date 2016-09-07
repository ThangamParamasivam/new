#include<stdio.h>
#include<conio.h>
void main()
{
int rev=0,n;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
printf("Reverse number is");
}
getch();
}
