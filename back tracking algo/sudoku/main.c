#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int a[20][20];
int c[20][20];
int b;
int i=0;
int j=0;



backtrack(int i,int j)
     {
       
	     int s=0;
	     int p=a[i][j];
	   
	   
	    
        if(c[i][j]!=0)
           {
           	
           		if(i==0)
			      backtrack(i-1,b-1);
			      
			     else
				  backtrack(i,j-1); 
           	
           	
		   }
     	
       
		else
		  {
				  
		   for(;p<=b;p++)
			{
			   s=bookvalue(i,j,p);
			   if(s==1)
			     break;
			     	
			  }
			      
	     if(s==0)
			{
				if(i==0)
			      backtrack(i-1,b-1);
			      
			     else
				  backtrack(i,j-1); 
			} 
	     
		 }     
			  
     	return;
     	
     	
	 }



int nonconflict(int i,int j,int p)

     {  
        int m=0,n=0;
       	int s=1;
       	int k=i-1;
       	int l=j;
       	
         for(;l>=0 && k>=0;k--)
	        {
	    
		     	if(a[k][l]==p)
	     	      {
                      return 0;
			    
	              }   
           }
           
           
           k=i;
           l=j-1;
           
           for(;k>=0 && l>=0;l--)
           
             {
             	
             	if(a[k][l]==p)
             	  {
             	  	
             	  	return 0;
				   }
             	
                            	
             	
			 }
			 
			 
			 k=i-i%2;
			 l=j-j%2;
			 
			 
            for(m=0;m<2;m++)
               {
			      for(n=0;n<2;n++)
				      {						    	
			    	       if(a[k+m][l+n]==p)
			    	         {
			    	            return 0;
					         }
			    	
			        }
			    	
			    	
			    }           
           
        s=1;
		return s;
     
	 
	 }      
     
     
     
     

int bookvalue(int i,int j)
      {
      	int m,n=0;
      	int s=0;
      	int p=1;
      	
      
      	 
      	 for(;j<b;j++)
      	    
      	    {
      	       for(p=1;p<=b;p++)
      	          {
				     s=nonconflict(i,j,p);
				
                     	if(s==1)
      	    	        {

      	    	  	        a[i][j]=p;
					     	return s;
      	    	  	
					    }
      	    	
      	    	
      	    	
      	    	
			      }
      	
      	
      	     }  
      	
      	return s;
      	
      	
	  }



int main(int argc, char *argv[]) 
       {
           
           int m=0,n=0;
           int s=0;
           
           
           printf("enter dimensions");
           scanf("%d",&b);
           
           
           
           	for(m=0;m<b;m++)
      	       {
      	   	     for(n=0;n<b;n++)
      	   	        {
      	   	   	        printf("\n enter no");
      	   	   	        scanf("%d",&a[i][j]);
      	   	   	         c[i][j]=a[i][j];
      	   	   	
      	   	   	
			         }
      	   	
      	   	
      	   	
      	   	
			    }
      	
      	
           
           
           
           
           
           
           for(i=0;i<b;i++)
              {
                 
				for(j=0;j<b;j++) 
				   {
				      if(a[i][j]!=0)    
				         s=bookvalue(i,j);
              	 
              	       if(s==0)
              	          {  
              	   	        	if(i==0)
			                       backtrack(i-1,b-1);
			       
			                    else
			             	       backtrack(i,j-1); 
		             	  }  
              	   	
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
