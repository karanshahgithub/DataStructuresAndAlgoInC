#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[10][10];

int visited[10];
int n=0;
int parent[10];
int q[10];
int d=0;





void dijkstra()
  {


   	int i=0;
   	int j=0;
   	int v=0;
   	int x=0;
    int m;
   	int count=0;
   	int min=0;
   	int mini;
   	
   	parent[x]=0;
   	while(j<n)
   	{ 
   	
     for(i=0;i<n;i++)
   	    {
   	   	  if(a[x][i]!=0)
   	   	   {
   	   	   	  if(a[x][i]+d<q[i])
   	   	   	     {
   	   	   	       for(m=0;m<v;m++)
   	   	   	          {
   	   	   	           	if(visited[m]==i)
   	   	   	          	   {
   	   	   	          	   	
   	   	   	          	   	count=1;
   	   	   	          	   	
						   }
   	   	   	          	
   	   	   	          	
   	   	   	          	
					  }
						
					if(count==0)
   	   	   	     	    {q[i]=a[x][i]+d;
   	   	   	     	      parent[i]=x;
   	   	   	     	     }
   	   	   	     	     
   	   	   	     	  count=0;   
   	   	   	     	
				 }
					   
			 		 
		  
		    }
   	         
	     			  	
   	    }  
   	
   visited[v]=x;
   q[x]=10000;
   v++;	
   min=1000;
  
  for(i=0;i<n;i++)
      {
      	if(q[i]<min)
      	  {
      	  	min=q[i];
      	  	mini=i;
			}
      	
      	
	  }
  
  x=mini;
  d= q[x];
  j++;  
   }
   
   





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
               	    	
               	        printf(" \n enter weight if vertex %d is connected to vertex %d",i,j);  	
               	    	
               	    	scanf("%d",&a[i][j]);               	    	
					   }
               	
               	
			   }
			   
			   
			   for(i=0;i<n;i++)
			      {
			      	
			      	q[i]=1000;
			      	
				  }
        
         dijkstra();
 
         
         for(i=0;i<n;i++)

           {
           	
           	
           	printf("\n parent of %d is %d",i,parent[i]);		   
			   
		  }




	       return 0;
       }






