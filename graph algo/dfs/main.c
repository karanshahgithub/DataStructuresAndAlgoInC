#include <stdio.h>
#include <stdlib.h>

int a[10][10];
int stack[10];
int p=0;
int n;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

dfs(int v)
  {
  	
  	int i,j,x,count=0;
  	while(p<n)
	    {
           if(v<0 && p<n)
  	         {
  	           for(i=0;i<n;i++)
  	              {
					
					 for(j=0;j<n;j++)
  	                  {
  	                  	if(i==stack[j])
  	                  	  {
  	                  	  	count=1;
					
						  }
						  
						  
			 	       }      
					   
				     if(count==0)
					   {
					   	 x=i;
					   	 break;
						}	
			      		
					count=0;
					
					}
						
						
						
			  }
			    
		    else				
  	         {
		
                 x=stack[v];
					
                
             }
	    	  
			  
			  
			    for(i=0;i<n;i++)
	    	       {
	    	   	      if(a[x][i]==1)
	    	   	        {
	    	   	  	       for(j=0;j<n;j++)
  	                       {
  	                  	      if(i==stack[j])
  	                  	       {
  	                  	  	     count=1;
					
						        }
						  
						       
                            }         
					 
					 
					 
					     }



	    	   	      if(a[x][i]==1 && count==0)
	    	            {
						
						 stack[p]=i;
	    	   	          p++;
	    	   	          v=p;
	    	        	  break;
	    	   	
	    	   	        }
	    	   	
	    	   	 count=0;
			      
				  
				  }  
	    	
	    	
	    	dfs(v-1);
	    	
	    	
		}	
  	
  	
  	   return;
  	
  	
  }



     int main(int argc, char *argv[]) 
       
	    {

            int i=0;
            int j=0;
            
            
            
            printf("enter no of vertices");
            scanf("%d",&n);
            
            
            
            
            for(i=0;i<n;i++)
               {

               	 for(j=0;j<n;j++)
               	    
               	     {
               	    	
               	        printf(" \n press 1 if vertex %d is connected to vertex %d",i,j);  	
               	    	
               	    	scanf("%d",&a[i][j]);               	    	
					   }
               	
               	
			   }
        
          stack[0]=0;
          p++;
          
 
 
 
 
         dfs(0);
 
         
         for(i=0;i<n;i++)

           {
           	
           	
           	printf("\n %d",stack[i]);		   
			   
		  }




	       return 0;
       }


