#include<stdio.h>
#include<conio.h>
void main()
{
char n;
printf("Enter the character");
scanf("%c",&n);
int a=n;
if((a>=65&&a<=91)||(a>=91&&a<=127))
{
printf("Alphabet");
}
else
{
printf("Not alphabet");
}
getch();
}
