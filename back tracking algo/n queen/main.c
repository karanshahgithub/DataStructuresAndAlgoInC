#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int a[20][20];
int b;
int i=0;



backtrack(int m)
     {
        
        i=m;
     	int j=0;
     	int s=0;
     	
     	while(a[i][j]!=1)
     	     {
     	     	j=j+1;
			  
			  }
			  
		 a[i][j]=0;
		 j=j+1;
			  
		for(;j<b;j++)
			{
			   s=bookplace(i,j);
			   if(s==1)
			     break;
			     	
			  }
			      
	     if(s==0)
			{
			 backtrack(i-1);
			} 
			  
			  
     	
     	
     	
	 }



int nonconflict(int i,int j)

     {
       	int s=1;
       	int k=i-1;
       	int l=j;
       	
         for(;l>=0 && k>=0;k--)
	        {
	    
		     	if(a[k][l]==1)
	     	      {
                      return 0;
			    
	              }   
           }
           
           
           k=i-1;
           l=j-1;
           
           for(;k>=0 && l>=0;k--)
           
             {
             	
             	if(a[k][l]==1)
             	  {
             	  	
             	  	return 0;
				   }
             	
               l=l-1;             	
             	
			 }
			 
			 
			 k=i-1;
			 l=j+1;
			 
			 
            for(;k>=0 && l<b;k--)
              
			    {
			    	
			    	if(a[k][l]==1)
			    	  {
			    	      return 0;
					  }
			    	
			    	l=l+1;
			    	
			    	
			    }           
           
        s=1;
		return s;
     
	 
	 }      
     
     
     
     

int bookplace(int i,int j)
      {
      	
      	int s=0;
      	 
      	 for(;j<b;j++)
      	    
      	    {
      	    	
      	       s=nonconflict(i,j);
      	    	
      	    	if(s==1)
      	    	  {
      	    	  	    a[i][j]=1;
						return s;
      	    	  	
					}
      	    	
      	    	
      	    	
      	    	
			  }
      	
      	
      	
      	
      	return s;
      	
      	
	  }



int main(int argc, char *argv[]) 
       {
           
           
           int s=0;
           int j=0;
           
           printf("enter dimensions");
           scanf("%d",&b);
           
           for(i=0;i<b;i++)
              {
                 s=bookplace(i,0);
              	 
              	  if(s==0)
              	   {
              	   	 backtrack(i-1);
              	   	
				   }
				   
				     
             }
             
             printf("\n \n");
             for(i=0;i<b;i++)
               {
               	 
               	for(j=0;j<b;j++)
               	   {
               	   	  
               	   	printf("%d",a[i][j]);
               	   	printf("\t");
               	   	    	
               	    }
               	printf("\n \n \n");
               	
			   }


	       return 0;
     
	 
	 
	 
	 
	 }
