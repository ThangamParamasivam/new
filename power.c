#include<stdio.h>
#include<conio.h>
void main()
{
int base,ex;
long long result=1;
printf("Enter the base no");
scanf("%d",&base);
printf("Enter the ex");
scanf("%d",&ex);
while(ex!=0)
{
result *=base;
--ex;
}
printf("ans:%lld",result);
getch();
}
