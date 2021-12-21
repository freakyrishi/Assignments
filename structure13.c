//create a structure book having title author,subject,id,fees pass this structure
//using prototype function

#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   id;
};


void bookp( struct Books book );

int main( ) 
{

   struct Books Book1;
   struct Books Book2;
  
   strcpy( Book1.title, "History");
   strcpy( Book1.author, "ABC"); 
   strcpy( Book1.subject, "Basic History");
   Book1.id = 121212;

   
   strcpy( Book2.title, "Maths");
   strcpy( Book2.author, "XYZ");
   strcpy( Book2.subject, "Basic Maths");
   Book2.id = 232323;
 

   bookp( Book1 );

   
   bookp( Book2 );

  
}

void bookp( struct Books book ) 
{
   printf("\n");
   printf("\nBook Details\n");
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book id : %d\n", book.id);
}

