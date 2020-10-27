#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[5],i,k,j,temp,key;
	
	
	printf("enter elements for array");
	
	for(i=0;i<5;i++)
	  {
	  	
	  	a[i]=rand()%100;
	  	
	  	
	  }
	  
	  
	  
	  printf("\n");
	  
	  
	  
	  for(i=0;i<5;i++)
	    {
	    	
	    	printf("\n");
	    	printf("%d",a[i]);
	    	
		}
	  key=0;
	
	for(i=0;i<4;i++)
	
	
	 {

       for(j=i;j<5;j++)
         
         {
		 


	 	   if(a[j]<a[key])
	 	
	 	     key=j;
	 	
	 	
	    }
	
	    temp=a[i];
	    a[i]=a[key];
	    a[key]=temp;
	
	
     }
	
	
	printf("\n \n \n sorted array");
	
	
	
	for(i=0;i<5;i++)
	  {
	  	printf("\n");
	  	printf("%d",a[i]);
	  	
	  	
	  	
	  }
	
	
	return 0;
	
	
	
}
