#include<stdio.h>
#include<conio.h>


/* this is program for bubble sort , iterative binary search and recursive binary search */

int main(int argc, char** argv) 
   {
   	    
   	    int a[5];
   	    int i,j,k;
   	    int key,check;
   	    int low=0,high=4;
   	    
   	    
   	    for(i=0;i<5;i++)
   	       {
   	       	    
   	        a[i]= rand() % 100;
			   
			   	    
   	       }
   	    
   	    
   	    
   	    for(i=0;i<5;i++)
   	       {
   	       	 
   	       	 printf(" \n %d",a[i]);
   	       	 
   	       	 
			  }
			  
			  
			  
			  printf("\n \n \n");
   	    
   	    
   	    for(i=0;i<4;i++)
   	       
   	          {
   	        	
   	        	for(j=0;j<4-i;j++)
   	        	  
   	        	   {
   	        	   	
   	        	   	   
					  
					  if(a[j]>a[j+1])
   	        	   	     {
   	        	   	     	k=a[j];
   	        	   	     	a[j]=a[j+1];
   	        	   	     	a[j+1]=k;
   	        	   	     	
   	        	   	     }
   	        	   	
   	        	   	
   	        	   	
   	        	   	
					} 
   	        	  
   	        	  
   	        	
   	        	
   	          }





          printf("\n \n \n");



          for(i=0;i<=4;i++)
   	         {
   	       	 
   	       	    printf("\n %d",a[i]);
   	       	 
   	       	 
			 }
   
   
       printf("\n\n\n enter no to be searched");
       scanf("%d",&key);
   
   
   
   
      check=search(a,key); 
	  
	   if(check==0)
			   {
			   	printf("number not found");
			   	
			   }
			
			else
			{
				
				printf("number found");
				
			}
			  
		
		
		
		printf("\n \n \n enter no to be searched for recursive search");
		scanf("%d",&key);
		
	check= recursionsearch(a,key,low,high); 
	  
	   if(check==0)
			   {
			   	printf("number not found");
			   	
			   }
			
			else
			{
				
				printf("number found");
				
			}
		
			  
			  
			   	
   	        	

   	    
   	    return 0;
   	    
   	    
}




   int search(int b[5],int key)
      {
      	
      	 int low,high,mid,check=0;
      	 low=0;
      	 high=4;
      	 mid =(low+high)/2;
      	 
      	 while(low!=high)

            {
               mid =(low+high)/2;  
    	  
    	        if(low==mid)
    	          {
    	          	if(b[low]==key)
    	          	   {
    	          	     check=1;
            	  	     return check;
            	  	  	
						 }
						 
				   else if(b[high]==key)
    	          	   {
    	          	     check=1;
            	  	     return check;
            	  	  	
						 }	 
						 
					else
					   {
					   	 return check;
					   	
					   	
				     	}	 
						 
    	          	    
    	          	
    	          	
				  }
    	  
    	         if(high==mid)
    	          {
    	          	if(b[high]==key)
    	          	   {
    	          	     check=1;
            	  	     return check;
            	  	  	
						 }
						 
					else if(b[low]==key)
    	          	   {
    	          	     check=1;
            	  	     return check;
            	  	  	
						 }
						 	 
						 
					else
					   {
					   	 return check;
					   	
					   	
				     	}	 
						 
    	          	    
    	          	
    	          	
				  }
    	  
    	  
    	  
    	 	if(b[mid]==key)
            	  {
            	  	  check=1;
            	  	  return check;
            	  	  
				  }
            	
            	
            	else if(b[mid]>key)
            	      {
            	      	
            	      	high=mid;
            	      	
            	      	
					  }
            	
            	else if(b[mid]<key)
            	    {
            	    	
            	    	
            	    	low=mid;
            	    	
					}
            	
            	
            	
            	
			}      	 
      	 
      	 return check;
      	
      	
      	
	  }
     
     
     
     
       int recursionsearch(int b[5],int key,int lower,int higher)
      {
      
      	 int low,high,mid,check=0;
      	 low=lower;
      	 high=higher;
      	 mid =(low+high)/2;
      	 
      	 if(low!=high)

            {
               mid =(low+high)/2;  
    	  
    	        if(low==mid)
    	          {
    	          	if(b[low]==key)
    	          	   {
    	          	     check=1;
            	  	     return check;
            	  	  	
						 }
                   
                   	else if(b[high]==key)
    	          	   {
    	          	     check=1;
            	  	     return check;
            	  	  	
						 }




					else
					   {
					   	 return check;
					   	
					   	
				     	}	 
						 
    	          	    
    	          	
    	          	
				  }
    	  
    	         if(high==mid)
    	          {
    	          	if(b[high]==key)
    	          	   {
    	          	     check=1;
            	  	     return check;
            	  	  	
						 }
					
					else if(b[low]==key)
    	          	   {
    	          	     check=1;
            	  	     return check;
            	  	  	
						 }
					
					else
					
					   {
					   	 return check;
					   	
					   	
				     	}	 
						 
    	          	    
    	          	
    	          	
				  }
    	  
    	  
    	  
    	 	if(b[mid]==key)
            	  {
            	  	  check=1;
            	  	  return check;
            	  	  
				  }
            	
            	
            	else if(b[mid]>key)
            	      {
            	      	
            	      	high=mid;
            	      	
            	      	 recursionsearch(b,key,low,high);

            	      	
					  }
            	
            	else if(b[mid]<key)
            	    {
            	    	
            	    	
            	    	low=mid;
            	        recursionsearch(b,key,low,high);

					     	
					}
            	
            	
            	
            	
			} 
			
			
		else
		{
			
	       return check;
	   
	    }	     	 
      	 
      	 
      	
      	
      	
	  }
     






