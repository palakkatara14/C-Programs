#include <stdio.h>  
int main()  
{  
    int num, i;  
    printf (" Enter a number for table in c: ");  
    scanf (" %d", &num); 
      
   
    
    for ( i = 1; i <= 10; i++)  
    {  
        printf ("\n %d * %d = %d",num,i,(num*i));  
    }  
    return 0;  
}  