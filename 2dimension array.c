//create 2 dimension array 3 row and 3 column and initilize it


#include <stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row,col;
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",a[row][col]);
		
		}
		printf("\n");
	} 
}
