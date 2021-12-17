//create a function result with 3 integer parameter 3 subject marks
//calculate total marks, percentage, grade.

#include <stdio.h>
void result(int sub1,int sub2, int sub3)
{
	int total;
    int percentage;
	total=sub1+sub2+sub3;
	printf("total marks%d",total);
	percentage=(total/300)*100;
	printf("\npercentage=%d",percentage);
}
int main()
{
	int mark1,mark2,mark3;
	printf("enter  marks");
	scanf("%d%d%d",&mark1,&mark2,&mark3);
	result(mark1,mark2,mark3);
}
