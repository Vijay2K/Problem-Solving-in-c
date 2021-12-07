#include <stdio.h>

void GiveStrongNumber(int start, int end);

void main()  
{  
    int start,end;  
    
    printf("Input starting range of number : ");  
    scanf("%d", &start);
    printf("Input ending range of number: ");  
    scanf("%d", &end); 
    printf("The Strong numbers are :\n"); 

	GiveStrongNumber(start, end);
}

void GiveStrongNumber(int start, int end)
{
	int sum, n;
	long fact;
	
	int i, j, k;
	for(i = start; i<=end; i++)
   	{
     n = i;
     sum = 0;  
 
    	for(j = i;j > 0;j = j/10) 
    	{  
  
        	fact = 1;  
          	for(k = 1; k <= j % 10; k++)  
           	{  
            	fact = fact * k;  
           	}  
        	sum += fact;  
    	}  
  
    	if(sum == n)   
		{
		   printf("%d  ", n);
		}      	 
	}	   
}




