//example of enum using loop

#include <stdio.h>  
     enum months{jan=1, feb, march, april, may, june, july, august, september, october, november, december};  
    int main()  
    {  
     int i; 
     for(i=jan;i<=december;i++)  
     {  
     printf("%d \n",i);  
     }  
        return 0;  
    }  

