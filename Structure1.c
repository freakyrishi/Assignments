//create a simple book structure member accepting the values 1

#include <stdio.h>
struct book
{
	int bookid;
	char title[10];
	int price;
}book1;
int main()
{
	book1.bookid=456;
	strcpy(book1.title,"Maths");
	book1.price=400;
	
	printf("book id name is= %d",book1.bookid);
	printf("\ntitle of this book= %s",book1.title);
	printf("\nprice of this book= %d",book1.price);
}
________________________________________________________________________________


//create a simple book structure member accepting the values 3

#include<stdio.h>
struct book 
{
	int bookid;
	char title[10];
	int price;
}book1,book2,book3;
int main()
{
	book1.bookid=555;
	strcpy(book1.title,"python");
	book1.price=200;
	printf("Book id = %d",book1.bookid);
	printf("\nBook Title = %s",book1.title);
	printf("\nBook Price = %d\n",book1.price);

    printf("-------------------------------------\n");
    book2.bookid=666;
    strcpy(book2.title,"Sales Force");
    book2.price=300;
    printf("\nbook id= %d",book2.bookid);
    printf("\nbook Title= %s",book2.title);
    printf("\nbook Price= %d\n",book2.price);
    
    printf("-------------------------------------\n");
    book3.bookid=777;
    strcpy(book3.title,"React Js");
    book3.price=400;
    printf("\nbook id= %d",book3.bookid);
    printf("\nbook Title= %s",book3.title);
    printf("\nbook Price= %d",book3.price);
}
_______________________________________________________________________________
_________________________________________________________________________________


//create a simple book structure member accepting the values 1 (form user)

#include <stdio.h>
struct book
{
	int bookid;
	char title[10];
	int price;
} book1;
int main()
{
	printf("enter book id ");
	scanf("%d",&book1.bookid);
	printf("enter title");
	scanf("%s",&book1.title);
	printf("enter price");
	scanf("%d",&book1.price);
	//values print
	
	printf("book id is = %d\n",book1.bookid);
	printf("title is = %s\n",book1.title);
	printf("price is = %d",book1.price);
}
______________________________________________________________________________________________

//create a simple book structure member accepting the values 3 (form user)

#include <stdio.h>
struct book
{
	int bookid;
	char title[10];
	int price;
};
int main()
{
    struct book book1;
    printf("enter book id ");
    scanf("%d",&book1.bookid);
    printf("enter title ");
    scanf("%s",&book1.title);
    printf("enter price ");
    scanf("%d",&book1.price);
    
    printf("\nBook id = %d\n",book1.bookid);
    printf("title = %s\n",book1.title);
    printf("price = %d\n",book1.price);
    
    printf("------------------------------------------------------------\n");
    
    struct book book2;
    printf("enter book id ");
    scanf("%d",&book2.bookid);
    printf("enter title ");
    scanf("%s",&book2.title);
    printf("enter price ");
    scanf("%d",&book2.price);
    
    printf("\nBook id = %d\n",book2.bookid);
    printf("title = %s\n",book2.title);
    printf("price = %d\n",book2.price);
    
    printf("------------------------------------------------------------\n");
    
    struct book book3;
    printf("enter book id ");
    scanf("%d",&book3.bookid);
    printf("enter title ");
    scanf("%s",&book3.title);
    printf("enter price ");
    scanf("%d",&book3.price);
    
    printf("\nBook id = %d\n",book3.bookid);
    printf("title = %s\n",book3.title);
    printf("price = %d\n",book3.price);
    
    printf("------------------------------------------------------------");
}



