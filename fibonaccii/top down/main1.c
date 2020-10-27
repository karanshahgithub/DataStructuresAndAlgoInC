#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int result[10],n;


int fibonaci(int p)
     {
     	
     	if(p==0)
     	 { // result[p]=0;
     	   return(result[p]=0);
     	
         }
     	 else if(p==1)
     	 {	 
		     result[p]=1;
     	    return(result[p]);
         }  
     	   
     	  else
		   {
		   	 result[p]=fibonaci(p-1)+fibonaci(p-2);
		   	 return(result[p]);		   	
		   	
		  } 
     	   
     	
     	
     	
	 }




int main() 

     { 
     
       int i=0;
	    printf("enter no");
		scanf("%d",&n);
		
	 fibonaci(n-1);
	  
	  	   for(i=0;i<n;i++)
	  	      {
	  	      	
	  	      	printf("\n %d",result[i]);			
		 
		   	}
	
	
      	return 0;


     }




