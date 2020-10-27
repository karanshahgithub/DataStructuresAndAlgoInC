#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 


{
	
   int a[5],i,j,k,key,temp;
   
   for (i=0;i<5;i++)
        {
        	scanf("%d",&a[i]);        	
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
	   	
	   	printf("\n %d",a[i]);
	   	
	   }
	
	
	
        	
        	
        	
        	
		
	

	
	

}
