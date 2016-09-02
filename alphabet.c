#include<stdio.h>
#include<conio.h>
void main()
{
char d;
printf("Enter the character");
scanf("%c",&d);
int a=d;
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
