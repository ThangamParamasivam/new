#include<stdio.h>
long toBinary(int);
int main()
{
long binaryNo;
int decimalNo;
printf("Enter the decimal no:");
scanf("%d",&decimalNo);
binaryNo=toBinary(decimalNo);
printf("Binary value is %d",binaryNo);
return 0;
}
long toBinary(int decimalNo)
{
static long binaryNo,remainder,factor=1;
if(decimalNo!=0)
{
remainder=decimalNo%2;
binaryNo=binaryNo+remainder*factor;
factor=factor*10;
toBinary(decimalNo/2);
}
return binaryNo;
}
