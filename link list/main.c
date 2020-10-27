#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct node
     {
        int a;
		struct node* next;	
     	
	 };

struct node* first = NULL;
struct node* temp;
struct node* curr;
struct node* firstemp;
int count = 0;
int check=0;
	

void create(int i)
   {
	if(first == NULL)
       {
          first = (struct node*)malloc(sizeof(struct node));
       	  first->a=i;
       	  first->next=NULL;
	   
	   }
   	 
   	 else if(first->next==NULL)
   	    {
   	        curr = (struct node*)malloc(sizeof(struct node));
			curr->a=i;
   	    	curr->next = NULL;
   	    	first->next=curr;
   	    	
   	    	
   	    }
   	 
   	 
   	 else
   	   {
   	    temp = (struct node*)malloc(sizeof(struct node));
		temp->a=i;
   	   	temp->next=NULL;
   	   	curr->next = temp;
   	   	curr = curr->next;
   	   	
       }
   	 
   	 
  }




void traversal()
     {
     	struct node* temp;
     	temp = first;
     	
       while(temp!=NULL)
     	  {
     	  	printf("\n %d",temp->a);
     	  	temp = temp->next;
     	  	
     	  }
     	
   }


void insert()
    {
       int i,j,k;
	   struct node* temp;
	   struct node* temp2;
	   int check = 0;
	   
	   printf(" \n press 1 --->  to insert at the beginning ");
	   printf("\n press 2 --->   to insert at the end ");                           	
       printf("\n press 3 --->   to insert in between ");
    	
       scanf("%d",&i);
	   
	   if(i==1)
	     {
	       printf("\n enter value to be inserted ");
		   scanf("%d",&j);	
		   
		   temp = (struct node*)malloc(sizeof(struct node));
		   temp->a = j;
		   temp->next = first;
		   first = temp;	
		   	 
		 }	
	
	  else if(i==2)
	    {
	    	printf("\n enter value to be inserted ");
		    scanf("%d",&j);	
		    temp = (struct node*)malloc(sizeof(struct node));
			temp->a = j;
			temp->next = NULL;
			curr->next = temp;
			curr = curr->next;
			 
	     
		}
	
	 else if(i==3)
	    {
	      	printf("\n enter value to be inserted ");
		    scanf("%d",&j);	
			printf("\n enter value of node after which current node to be inserted");
			scanf("%d",&k);	
			
			temp = (struct node*)malloc(sizeof(struct node));
			temp2 = first;
			
			while(temp2!=NULL)
			   {
			   	
			   	if(temp2->a == k)
			   	  {
					 check=1;
			   	     break;
			      }
			   	 
				temp2 = temp2->next;	 
			   	
			   }
	    	if(check==1)
	        {
			  temp->a = j;
			  temp->next = temp2->next;
	          temp2->next =temp ;
		    }
	    	
	    	else 
	    	{
	    		printf("\n sorry wrong node value");
			}
		
		}
	
	
	}
	


void delete()
    {
      int i,j,count=1;
      struct node* temp = first;
      struct node* temp2;
	 
	  printf("\n press 1 ---> to delete a number by its sequence");
	  printf("\n press 2 ---> to delete a number by its value");
	  scanf(" \n %d",&i);
	  
	  
	  if(i==1)
	    {
	    	printf("enter sequence no");
	    	scanf("%d",&j);
	    	while(temp!=NULL)
	    	  {
			     if(count==j)
			       {
			         temp2->next = temp->next;
					 free(temp);
					 break;      	
				   }
			   temp2 = temp;   
			   temp = temp->next;
			   count++;
			  }
			  
		}
	    	
     else if(i==2)
	    {
	       	printf("enter node value no");
	    	scanf("%d",&j);
	    	
	    	while(temp!=NULL)
	    	  {
			     if(temp->a == j)
			       {
			         temp2->next = temp->next;
					 free(temp);
					 break;      	
				   }
			   temp2 = temp;   
			   temp = temp->next;
			  
			  }
	    	
	    	
		} 	
    	
    	
    	
	}	


void noofnodes(struct node* temp)
      {
      	if(temp==NULL)
      	  return;
      	  
      	  temp=temp->next;
		  count++;
		  noofnodes(temp);  
      	
	  }
	


/*void swapnodes(int k,int l)
           {
              int m=NULL,n=NULL;
              struct node* temp = first;
              
			  
			  while(temp!=NULL)
			     {
			     	if(temp->a==k)
			     	  {
			     	   temp->a = m;
					   	m = temp->a;
			     	  	break;
			     	  }
           	   
           	   
			    }
				
				if(m//==NULL)
				   {
           	        printf("\n node not found ");
				  	 	
           	      }
			
			else if(m!=NULL)
			   {
			   	 temp = first;
              
			     while(temp!=NULL)
			      {
			     	if(temp->a==l)
			     	  {
			     	  	n = temp->a;
			     	  	temp->a = m;
						break;
					   }
			     	temp= temp->next;
				  }
           	     
           	     if(n==NULL)
           	       {
           	       	 printf("\n node not found");
           	       	 
           	       	 temp = first;
           	       	 while(temp->a!=NULL)
           	       	    temp = temp->next;
           	       	   
					  temp->a = m;		     
           	       	    
					}
			     
			     else if(n!=NULL)
			        {
			          temp =first;	
			          
					  while(temp->a!=NULL)
           	       	    temp = temp->next;
           	       	   
					  temp->a = n;		     
           	       	 	
			         		
			        }      	
	
              }
        }
        
  */
  
  
  
  void swapnodes(int k,int l)
         {
            struct node* prev = NULL;	
         	struct node* curr = first;
         	struct node* prev1;
         	struct node* prev2;
         	struct node* curr1;
         	struct node* curr2;
         	struct node* temp;
           
		   	while(curr!=NULL)
		   	    {
		   	    	if(curr->a==k)
		   	    	 break;
											   
					prev = curr;
		   	    	curr = curr->next;
		   	    	
		   	    	
		   	   }
		 	   
		    if(curr!=NULL)
			   {
			   	  prev1 = prev;
			   	  curr1 = curr;
			   	  
			   	  curr = first ;
		          prev = NULL;
				    	   	
		          	while(curr!=NULL)
		   	        {
		   	    	 if(curr->a==l)
		   	    	  break;
											   
					 prev = curr;
		   	    	 curr = curr->next;
		   	    	
		   	    	
		   	        }
		 	   	
			   	   if(curr!=NULL)
			   	     {
			   	     	prev2 = prev;
			   	     	curr2 = curr;
			   	     	
			   	     	printf("\n karan");
			   	     	
			   	     	if(prev1==NULL)
			   	     	  {
			   	     	     prev2->next = curr1;
			   	     	     temp = curr1->next;
			   	     	     curr1->next = curr2->next;
			   	     	     curr2->next = temp;
			   	     	  	  first = curr2;
			   	     	  				   	     	  	
							}
			   	     	
			   	     	else if(prev2==NULL)
			   	     	   {
			   	     	        printf("\n karan");
								temp = curr1->next;
			   	     	        curr1->next = curr2->next;
			   	     	
			   	            	prev1->next = curr2;
			   	     	        curr2->next = temp;
			   	     		    
								first = curr1;	 
			   	     		   
			   	     	    }
			   	     	else
			   	     	{prev2->next = curr1;
			   	     	temp = curr1->next;
			   	     	curr1->next = curr2->next;
			   	     	
			   	     	prev1->next = curr2;
			   	     	curr2->next = temp;
			   	       }
					}
			   	
			   	 else if(curr==NULL)
			   	      printf("\n no not found");
			   	
			  }	   
			  
			 else if(curr==NULL)
			    printf("\n no not found");
			   
		
		
		} 
		
		




void reverse(struct node* current,struct node* prev)
     {
     	if(current->next!=NULL)
          reverse(current->next,current);
          
          
        if(check==1)
		   {
		   	current->next = prev;
		   	return;
			 }  
 	  
 	    if(current->next == NULL)
 	       {
 	       	  check=1;
 	       	  current->next = prev;
 	       	  first = current;
 	       	  return;
 	       	
			}
 	  
	}		     
        

        
        

int main(int argc, char *argv[]) {
	
	char c='y';
	int i;
	int j=1;
	int k,l;
	
	while(c=='y' || c=='Y')
	  {
	    printf("\n enter value");  	
	  	scanf("%d",&i);
	  	
	  	create(i);
	  	fflush(stdin);
	  	printf("press y or Y want to enter more values");
	  	scanf("%c",&c);
	  	
	  	
	  }
	
	while(j!=0)
	  {
	    printf("\n enter 1 ---> traversal");
	    printf("\n enter 2 ---> insertion");
	    printf("\n enter 3 ---> deletion");
	    printf("\n enter 4 ---> to count no nodes recursively");
	    printf("\n enter 5 ---> to swap nodes");
		printf("\n enter 6 ---> to reverse link");
		//printf("\n enter 7 ---> to perform merge sort on link list");
		printf("\n enter 0 ---> exit");
    	  
	    
		scanf("\n %d",&j);
		
		if(j==1)
	      traversal();	   
	  
	    else if(j==2)
	       insert(); 
	       
	     else if(j==3)
		    delete();  
	  
	     else if(j==4)
	        {
	        	struct node* temp = first;
	        	noofnodes(temp);
	        	printf("\n no of nodes are %d",count);
	        	count = 0;
			}
	     else if(j==5)
	        {
	        	printf("\n enter data of two nodes to be swapped");
	        	scanf("%d %d",&k,&l);
             	swapnodes(k,l);
			}
	    
	     else if(j==6)
	       {
	       	    check = 0;
	       	    reverse(first,NULL);
	       	    check = 0;
		   }
	  
	     
	  
	  
	  
	  }
	  
	  
return 0;
}
