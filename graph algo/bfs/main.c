#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[6][6]={  {0,1,1,1,0,0},
		       {1,0,0,0,1,1},
			   {1,0,0,0,1,1},
			   {1,0,0,0,1,1},
			   {0,1,1,1,0,0},
			   {0,1,1,1,0,0} 
					 
			};  
         
int b[10];
int n=6;
int parent[10];




void bfs(int x)
   
   {
   	int i=0;
   	int j=0;
   	int v=0;
    int m;
   	int count=0;
   	
   	parent[x]=x;
   	b[v]=x;
   	v++;
   	
   	while(j<n)
   	{ 
   
      for(i=0;i<n;i++)
   	       {
   	   	     if(a[x][i]==1)
   	   	         {
   	   	   	       for(m=0;m<v;m++)
   	   	   	         {  
   	   	   	            if(b[m]==i)
   	   	   	     	      { 
   	   	   	     	   	   count=1;
					      }
   	   	   	     	
				     }  
					   
			        if(count==0)		   
			         {  
				       b[v]=i;
   	   	   	           v++;
   	   	   	           parent[i]=x;
   	   	   	    
                    }  
			 
			       count=0;				 
		  
		        }  
   	         
	       }  
   	
    x=b[j];
    j++;
   	
   }
   
   





}






   
int main(int argc, char *argv[]) 
       
	    {

            int i=0;
            int j=0;
            
            
            
            //printf("enter no of vertices");
            //scanf("%d",&n);
            
           
            
            /*for(i=0;i<n;i++)
               {

               	 for(j=0;j<n;j++)
               	    
               	     {
               	    	
               	        printf(" \n press 1 if vertex %d is connected to vertex %d",i,j);  	
               	    	
               	    	scanf("%d",&a[i][j]);               	    	
					   }
               	
               	
			   }
                
			*/
         
	 bfs(5);
 
         		 
	for(i=0;i<n;i++)

           {
           	
           	
           	printf("\n parent of %d is %d",i,parent[i]);		   
			   
		  }




	       return 0;
       }






