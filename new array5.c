//creating a array to store 5 subjects
/*
marks =22
marks =33
marks =44
marks =55
marks =66*/

#include<stdio.h>
int main()
{
	//creating an array to store 5 subject marks
	int marks[5] = {22,33,44,55,66};
	int i;
	for(i=0;i<5;i++){
		printf("\nmarks =%d",marks[i]);
	}
}

