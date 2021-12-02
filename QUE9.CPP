#include <stdio.h>
#include <conio.h>
void main()
{
int years,weeks,days;
clrscr();
printf("enter days");
scanf("%d",&days);
years=days/365;
weeks=(days%365)/7;
days=days-((years*365)+(weeks*7));
printf("years=%d\n weeks=%d\n days=%d\n",years,weeks,days);
getch();
}

