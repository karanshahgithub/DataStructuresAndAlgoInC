#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int j1;
int a[100];
int temp2;
int check;
int counttemp2;

int traverse(int temp4)
    {
        int temp5;
		if(temp4>j1)  
    	     return 0;
		
		if(temp4==temp2)
    	  {
		    check = 1;
		    return counttemp2 = counttemp2+a[temp4];
          }
    	 
    	temp5= temp4*2;
    	counttemp2 = traverse(temp5);
    	
    	if(check==1)
	      return counttemp2 = counttemp2+a[temp4];
	
	    else if(check==0)
	         {
	         	temp5= temp4*2+1;
    	       counttemp2 = traverse(temp5);
			    
			    if(check==1)
	               return counttemp2 = counttemp2+a[temp4];
	               
	             else if(check==0)  
			         return 0;
			 
			 }
			 
	
	}      



int main(int argc, char *argv[]) 
  {
	int i;
	
	//no of test cases
	
	scanf("%d",&i);
	int j=0;
	for(j=0;j<i;j++)
	  {
	  	
	  	//enter no of nodes
	  	
	  	scanf("%d",&j1);
	  	
	  	//entering value of nodes
		
	  	int j2;
	  	a[0]=0;
	  	
	  	for(j2=1;j2<=j1;j2++)
	  	   {
	  	   	scanf("\n %d",&a[j2]);
			}
	  	
	  	
	  	// calculating distance
	  	
	  	int leaf;
	  	 
	  	leaf = (j1+1)/2;
	  	 
	  	int count = 0;
	  	int counttemp1 = 0;
	  	int counttemp=0; 
	  	 
	  	 while(leaf>0)
	  	    {
	  	       
			  	int leaftemp = leaf-1;
	  	    	int temp = j1-leaf+1;
				
	  	    	
                 while(leaftemp>0)	  	    	
	  	    	    {
	  	    	    
					    temp2 = j1-leaftemp+1;
					   int temp3 = temp;
					   
					   
					   	
	  	    	    	while(temp3>=1)
	  	    	    	  {
							
						     counttemp1 = counttemp1 + a[temp3];
							 
							 if(temp3%2==0)
							    {temp3 = temp3/2;
								 counttemp2 = traverse(temp3);
								 
								  if(check==1)
								    break;
								 
							    }
						     
							 else if(temp3%2!=0) 
						        {temp3 = (temp3-1)/2;
						         counttemp2 = traverse(temp3);
						         
						          if(check==1)
								    break;
						        }
						     	   
						     else if(temp3/2==1) 
                                  break;						        
						        
		                  }
	  	    	    	
	  	    	    	  if(check==0)
	  	    	    	    counttemp2 = traverse(temp3);
	  	    	    	
	  	    	    	counttemp = counttemp1 + counttemp2;
	  	    	    	
	  	    	    	if(counttemp>count)
	  	    	    	  count = counttemp;
	  	    	    	
	  	    	    	 leaftemp--;
	  	    	    	 counttemp1 = 0;
	  	    	    	 counttemp2 = 0;
	                     check=0;  	    	    	
	  	    	    	
					  }
	  	    	
	  	    	   leaf--;
	  	    	
	  	    	
			  }
	  	 
	  	
	  	printf("\n %d",count);
	  	
	  	
	  	
	  }
	
	
	
	
	
	
	
	return 0;





}


