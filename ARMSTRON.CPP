#include <stdio.h>
#include <conio.h>
void main()
{
int number,n1,n2,n3,number1,orignalnumber;
clrscr();
printf("enter 3 digit num");
scanf("%d",&number);
orignalnumber=number;
n1=number%10;
number=number/10;
n2=number%10;
number=number/10;
n3=number%10;
number1=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
if(orignalnumber==number1)
{
printf("number is armstrong number");
}
else
if(orignalnumber!=number1)
{
printf("number is not armstrong number");
}
getch();
}