#include <stdio.h>
#include <conio.h>
void main()
{
int power,volt,resi_stence;
clrscr();
printf("enter volt & resistence");
scanf("%d%d",&volt,&resi_stence);
power=(volt*volt)/resi_stence;
printf("power=%d",power);
getch();
}