#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int result[10],n;


int fibonaci(int p)
     {
     	
     	if(p==0)
     	 { return;
     	
         }
     	 else if(p==1)
     	 {	 
		     return;
     	    
         }
     	   
     	  else
		   {
		   	 result[p]=result[p-1]+result[p-2];
		   	 
		   	  if(p==n)
		   	    {
		   	    	
		   	    	return ;
		   	    	
				   }
		   	 fibonaci(p+1);		   	
		   	
		  } 
     	   
     	
     	
     	
	 }




int main() 

     { 
     
       int i=0;
	    printf("enter no");
		scanf("%d",&n);
		
		result[0]=0;
		result[1]=1;
		
	 fibonaci(2);
	  
	  	   for(i=0;i<=n;i++)
	  	      {
	  	      	
	  	      	printf("\n %d",result[i]);			
		 
		   	}
	
	
      	return 0;


     }



