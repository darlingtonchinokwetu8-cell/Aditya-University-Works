#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node *prev;
};
struct node *head=NULL,*end=NULL;//firts and last nodes pointers
struct node* create_node();
void display();
void create_circularDLL();//function prototypes
void insert_beg();
void insert_end();
void insert_anypos();
void remove_beg();
void remove_end();
void remove_anypos();
void reverse();
void search();
void replace();
void sort();
int count=0;//global variable for storing the number of nodes
struct node *create_node()
{
	int info;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nMemory Full......");
        exit(1);
    }
    printf("\u001B[31m \nEnter Data into Node ");
    scanf("%d",&info);
    newnode->data=info;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void create_DLL(void)
{
	struct node *newnode;
	newnode=create_node();
    if(head==NULL)
    {
        head=end=newnode;
        head->prev=end;
        end->next=head;
    }
    else
    {
        end->next=newnode;
        newnode->prev=end;
        newnode->next=head;
        head->prev=newnode;
        end=newnode;
    }
    ++count;
    printf("\u001B[32m \nNode created successifully");
}//end of create node function
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\u001B[34m \n List is empty ");
        return;
    }
    temp=head;
    printf("\u001B[33m \nThe List Elements are ");
    do
    {
    	printf("%d ",temp->data);
        temp=temp->next;
	}
    while(temp!=head);
}//end of display function
void insert_beg(void)
{
	struct node*newnode=create_node();
    if(head==NULL)
    {
    	head=end=newnode;
    	end->next=head;
    	head->prev=end;
	}
    else
    {
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=end;
    end->next=newnode;
    head=newnode;
	}
    count ++;
    printf("\u001B[32m \nNode added at beginning successifully");
}
void insert_end()
{
	struct node* newnode=create_node();
    if(head==NULL)
    {
    	head=end=newnode;
    	end->next=head;
    	head->prev=end;
	}
    else
    {
    end->next=newnode;
    newnode->prev=end;
    newnode->next=head;
    head->prev;
    end=newnode;
	}
    ++count;
    printf("\u001B[32m \nNode added at end successifully");
}
void insert_any()
{
	int pos;
	struct node* newnode=create_node();
    printf("\u001B[33m \nEnter position ");
    scanf("%d",&pos);
    if(pos<1 || pos>count+1)
    {
    	printf("\u001B[35m \n Invalid position");
    	free(newnode);
    	exit(0);
	}
	struct node *curr=head ,*temp;
	if(pos==1)
	{
		insert_beg();
		return;
	}
	else if(pos==count+1)
	{
		insert_end();
		return;
	}
	else
	{
		for(int i=1;i<pos;++i)
	   {
	   	temp=curr;
		curr=curr->next;
    	}
    	temp->next=newnode;
    	newnode->prev=temp;
    	newnode->next=curr;
    	curr->prev=newnode;
	}
	++count;
	printf("\u001B[35m \nNewnode added at position %d ",pos);
}
void remove_beg()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\u001B[35m \nNo nodes existing....");
		free(head);
		exit(1);
	}
	if(head==end)
	{
		count--;
		free(head);
		head=end=NULL;
		printf("\u001B[35m \nFirst node removed ");
		return ;
	}
	temp=head;
	head=head->next;
	head->prev=end;
	end->next=head;
	free(temp);
	count--;
	printf("\u001B[35m \nFirst node removed ");
}
void remove_end()
{
	struct node *temp,*curr;
	if(head==NULL)
	{
		printf("\u001B[35m \nNo nodes existing....");
		free(head);
		exit(1);
	}
		if(head==end)
	{
		count--;
		free(head);
		head=end=NULL;
		printf("\u001B[35m \nEnd node removed ");
		return ;
	}
	curr=head;
	while(curr->next!=head)
	{
		temp=curr;
		curr=curr->next;
	}
	temp->next=head;
	head->prev=temp;
	end=temp;
	free(curr);
	count--;
	printf("\u001B[35m \nLast node removed ");
}
void remove_any()
{
	struct node *temp,*curr;
	int pos;
	if(head==NULL)
	{
		printf("\u001B[35m \n No nodes existing....");
		free(head);
		exit(1);
	}
	
	printf("\u001B[36m\n Enter position of the node..");
	scanf("%d",&pos);
	if(pos>count || pos<0)
	{
		printf("\n Invalid position position ");
	}
	curr=head;
	temp=NULL;
	if(pos==1)
	{
		remove_beg();
		return;
	}
	else if(pos==count)
	{
		remove_end();
		return;
	}
	for(int i=1;i<pos;i++)
	{
		temp=curr;
		curr=curr->next;
	}
	temp->next=curr->next;
	curr->next->prev=temp;
	free(curr);
	--count;
	printf("\u001B[35m \nNode removed at position %d ",pos);
	}
	void reverse(struct node *head)
	{
		if(head == NULL)
		{
			printf("\n 001B[37m No reversal for empty list");
			exit(0);
		}
		else
		{
		struct node *temp=end;
		do
		{
			printf("%d ",temp->data);
			temp=temp->prev;
		}
		while(temp!=end);
		}
	}
	void search()
	{ int key,flag=0;
	   struct node *temp;
	  if(head==NULL)
	  {
	  	printf("\u001B[35m \nNo nodes existing....");
		free(head);
		exit(1);
	  }
	  printf("\u001B[36m \n Enter element to search.");
	  scanf("%d",&key);
	  temp=head;
	  do
	  {
	  	if(temp->data==key)
	  	{
	  	 flag=1;
	  	 printf("\u001B[33m \n Element found...");
		}
		temp=temp->next;
	  }
	  while(temp!=head);
	  temp=temp->next;
	  if(flag==0)
	  printf("\u001B[32m \nElement not found ");
	  free(temp);
    }
    void replace()
	{ int key,flag=0,rep;
	   struct node *temp;
	  if(head==NULL)
	  {
	  	printf("\u001B[35m \nNo nodes existing....");
		free(head);
		exit(1);
	  }
	  printf("\u001B[36m \n Enter element to be replaced.");
	  scanf("%d",&key);
	  printf("\u001B[35m \n Enter replacement element.");
	  scanf("%d",&rep);
	  temp=head;
	  do
	  {
	  	if(temp->data==key)
	  	{
	  	  temp->data=rep;
	  	  flag=1;
	  	  printf("\u001B[37m Element replaced ");
	  	  return;
		}
	}
	while(temp!=head);
		temp=temp->next;
	printf("\n Element not found");
    }
void sort()
{
	int t;
	struct node*temp=head;
	struct node *i,*j;
	if(head==NULL)
	{
		printf("\u001B[35m \nNo nodes existing....");
		exit(0);
	}
	for(i=temp;i!=head;i=i->next)
	{
		for(j=i->next;j!=head;j=j->next)
		{
			if(i->data>j->data)
			{
				t=i->data;
				i->data=j->data;
				j->data=t;
			}
		}
	}
do
{
	printf("%d ", temp->data);
	temp=temp->next;
}
while(temp!=head);
}
int main()
{
    int choice;
    do
    {
        printf("\u001B[34m \n*********MENU********************");
        printf("\u001B[32m \u001B[4m \n1. Create Circular Double linked List   \n2. Display Circular DLL  \n3. Insert at Beginning \n4. Insert at End ");
        printf("\u001B[32m \u001B[3m \n5. Insert at Any position \n6. Remove first node \n7. Remove Last Node");
        printf("\u001B[32m \u001B[3m \n8. Remove node at specified position \n9.Number of Nodes \n10.Reversed Elements ");
        printf("\u001B[32m \u001B[3m \n11.Search any element.. \n12. Replace any element \n13. Sort list elements \n14. Exit ");
        printf("\u001B[35m\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create_DLL();
            break;
            case 2:display();
            break;
            case 3: insert_beg();
            break;
            case 4: insert_end();
            break;
            case 5:insert_any();
            break;
            case 6: remove_beg();
            break;
            case 7: remove_end();
            break;
            case 8:remove_any();
            break;
            case 9: printf("\u001B[3C\nTotal Nosdes created :%d ",count);
            break;
            case 10:printf("\u001B[36m Reversed elements are :\n"); reverse(head);
            break;
            case 11:search();
			break;
            case 12:replace();
			break;
            case 13: printf("\u001B[36m \n Sorted elements are:"); sort();break;
            case 14:exit(0);
            default:printf("\u001B[3CInvalid Option");
        }
    }
    while(1);
    return 0;
}
