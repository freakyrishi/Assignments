#include <stdio.h>
#include <conio.h>
void main()
{
int force,mass,accl;
clrscr();
printf("enter mass & accl");
scanf("%d%d",&mass,&accl);
force=mass*accl;
printf("force=%d",force);
getch();
}
