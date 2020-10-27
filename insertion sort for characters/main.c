#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
     {
	    char a[5]={'s','t','r','i','\0'};
	    
  		
	    
       int i,j,k,key,temp;
   
     for (i=0;i<5;i++)
        {
        	     	
        	for(j=0;j<i;j++)
        	    
        	     {
        	     	
        	     	if(a[i]<a[j])
        	     	  {
        	     	  	
        	     	  	key=a[j];
        	     	  	a[j]=a[i];
        	     	  	
						   
						   for(k=j+1;k<=i;k++)
						     {
						     	temp=a[k];
						     	a[k]=key;
						     	key=temp;
						     	
						     	
							 }
        	     	  	
        	     	  	
        	     	  	
					   }
        	     	
        	     	
				 }
        	
        	
        	
        	
        	
        	
        	
			}	
	
	
	for(i=0;i<5;i++)
	   {
	   	
	   	printf("\n %c",a[i]);
	   	
	   }
	
	
	
	  
	  
	 
	 
	  return 0;
	
	
	
    }
