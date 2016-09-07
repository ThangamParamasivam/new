#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
char *rev;
printf("Enter the string");
scanf("%s",str);
rev=strrev(str);
printf("Reverse the string");
getch();
}
