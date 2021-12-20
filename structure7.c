#include<stdio.h>
#include<string.h>
struct book {
int bookid;
char title[10];

} ;
int main() {
	//creating a structure variable
	struct book book1[3]; //creating a structure array of 3 elements
	//accepting the values from the user
	int i;
	for(i=0;i<3;i++) {
	
	printf("enter  book id");
scanf("%d",&book1[i].bookid);
printf("\nenter book title");
scanf("%s",&book1[i].title);
}

	printf("\n -------------book details of 3 books  are -----------");
	for(i=0;i<3;i++) {
	printf("\n book[%d]  details ----------------------",i+1);
	// displaying the values of structure members
	printf("\n book id : %d", book1[i].bookid);
	printf("\n title  : %s",book1[i].title);
	printf("\n -------------------------------");
	
}

	

}

