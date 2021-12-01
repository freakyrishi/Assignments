#include <stdio.h>
#include <conio.h>
void main()
{
int density,mass,volume;
clrscr();
printf("enter mass & volume");
scanf("%d%d",&mass,&volume);
density=mass/volume;
printf("density=%d",density);
getch();
}