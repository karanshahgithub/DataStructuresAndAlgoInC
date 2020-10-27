#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a[5];
int main(int argc, char *argv[]) {
	
	int i,j,s;
	
	
	for(i=0;i<5;i++)
	   {
	   	
	   	a[i]=rand()%100;
	   }
	
	p=0;
	r=4;
   s=partition(a,p,r);
	
	for(i=0;i<5;i++)
	  {
	  	
	  	printf("\n");
	  	printf("%d",a[i]);	  	
	  	
	  }
	
	return 0;
}



int partition(int a[5],int p,int r)
   
      {
      	
      	if(p==r)
      	{
      		return 0;
		  }
      	int i,j=0,temp;
      	i=p-1;
      	int x=a[r]; 
      	for(j=p;j<=r-1;j++)
		    {
		    	if(a[j]<=x)
                 {
                 	i=i+1;
                 	temp=a[j];
                 	a[j]=a[i];
                 	a[i]=temp;
                 	
				}		    	
		    	
		    	temp=a[r];
		    	a[r]=a[i+1];
		    	a[i+1]=temp;
		    	
		    	
			 } 
      	
      	
      	partition(a,p,i+1);
      	partition(a,i+2,r);
      	
      	
      	
	  }
