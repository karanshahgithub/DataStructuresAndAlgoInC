#include<stdio.h>
#include<conio.h>

int main()
   {
   	int a[5][5];
   	int i=0,j=0;
   	
   	
   	for(i=0;i<=4;i++)
   	   
		   {
		   	
		   	for(j=0;j<=i;j++)
		   	   
		   	    {
		   	    	
		   	       if(j==i || j==0)
				   	{
					 
					 a[i][j]=1;
					 
					   }
		   	    	
		   	       }
		   	
		   	 }   
   	
   	  
   	 for(i=1;i<=4;i++)
   	    
   	     {
   	     	
   	     	
   	     	for(j=1;j<i;j++)
   	     	   
   	     	   {
   	     	   	
   	     	   	a[i][j]=a[i-1][j-1]+a[i-1][j];
   	     	   	
				   }
   	     	
   	     	
   	     	
   	     	
   	     	
			}
   	
   	
   	
   	  for(i=0;i<=4;i++)
   	    
   	     {
   	     	
   	     	
   	     	for(j=0;j<=i;j++)
   	     	   
   	     	   {
   	     	   	
   	     	   	printf("\t  %d",a[i][j]);
				   
			  }
				   
   	     	
   	     	printf("\n \n");
   	     	
   	     	
   	     	
			}
   	
   	
   	
   	
   	
   	
   	
   	
   }

