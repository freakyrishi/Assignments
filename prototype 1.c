#include<stdio.h>
void si(float,float,float);
int main()
{       float p,n,r;
	//clrscr();
	printf("\nEnter P,N,R");
	scanf("%f%f%f",&p,&n,&r);
	//clrscr();
	si(p,n,r);
	//getch();
}
//function to calculate simple interest
void	si(float p,float n,float r)
	{   float s;
	    s=(p*n*r)/100;
	    printf("The SI = %.2f",s);
	}



