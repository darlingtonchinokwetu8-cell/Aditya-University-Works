#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL,*end=NULL;//firts and last nodes pointers
void display();
void create_SLL();//function prototypes
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
int number();
int count=0;//variable for storing the number of nodes
void create_SLL(void)
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
    if(head==NULL)
    {
        head=end=newnode;
        end->next=NULL;
    }
    else
    {
        end->next=newnode;
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
        printf("\u001B[34m \n Node not created ");
        exit(0);
    }
    temp=head;
    printf("\u001B[33m \nThe List Elements are ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}//end of display function
void insert_beg(void)
{
	int ele;
	struct node*newnode= (struct node*)malloc(sizeof(struct node));
	  if(newnode==NULL)
    {
        printf("\nMemory Full......");
        exit(1);
    }
    printf("\u001B[34m \nEnter Data into Node ");
    scanf("%d",&ele);
    newnode->data=ele;
    newnode->next=NULL;
    if(head==NULL)
    {
    	head=end=newnode;
	}
    else
    {
    newnode->next=head;
    head=newnode;
	}
    ++count;
    printf("\u001B[32m \nNode added at beginning successifully");
}
void insert_end()
{
	int ele;
	struct node* newnode= (struct node*)malloc(sizeof(struct node));
	  if(newnode==NULL)
    {
        printf("\nMemory Full......");
        exit(1);
    }
    printf("\u001B[34m \nEnter Data into Node ");
    scanf("%d",&ele);
    newnode->data=ele;
    newnode->next=NULL;
    if(head==NULL)
    {
    	head=end=newnode;
	}
    else
    {
    end->next=newnode;
    end=newnode;
	}
    ++count;
    printf("\u001B[32m \nNode added at end successifully");
}
void insert_any()
{
	int infor,pos;
	struct node* newnode= (struct node*)malloc(sizeof(struct node));
	  if(newnode==NULL)
    {
        printf("\nMemory Full......");
        exit(1);
    }
    printf("\u001B[34m \nEnter Data into Node ");
    scanf("%d",&infor);
    newnode->data=infor;
    newnode->next=NULL;
    printf("\u001B[33m \nEnter position ");
    scanf("%d",&pos);
    if(pos<0 || pos>count)
    {
    	printf("\u001B[35m \n Invalid position");
    	free(newnode);
    	exit(1);
	}
	struct node*temp=head;
	for(int i=1;i<pos-1;++i)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
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
	temp=head;
	head=head->next;
	free(temp);
	count--;
	printf("\u001B[35m \nFirst node removed ");
}
void remove_end()
{
	struct node *temp,*prev;
	if(head==NULL)
	{
		printf("\u001B[35m \nNo nodes existing....");
		free(head);
		exit(1);
	}
	temp=head;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	end=prev;
	count--;
	printf("\u001B[35m \nLast node removed ");
}
void remove_any()
{
	struct node *temp,*prev;
	int pos;
	if(head==NULL)
	{
		printf("\u001B[35m \n No nodes existing....");
		free(head);
		exit(1);
	}
	printf("\u001B[36m\n Enter position of the node..");
	scanf("%d",&pos);
	if(pos>count || pos<1)
	{
		printf("\n Invalid position position ");
	}
	temp=head;
	prev=NULL;
	if(pos==1)
	{
		temp=head;
		head=head->next;
		free(temp);
		return;
	}
	for(int i=2;i<=pos;i++)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
	--count;
	printf("\u001B[35m \nNode removed at position %d ",pos);
	}
	void reverse()
	{
		if(head == NULL)
		{
			printf("\u001B[35m \nNo nodes existing....");
		}
		struct node *temp=head,*prev=NULL,*next1=NULL,*curr=head;
		while(curr!=NULL)
		{
			next1=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next1;
		}
		head=prev;
		end=temp;
		while(head!=NULL)
		{
			printf("%d ",head->data);
			head=head->next;
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
	  while(temp!=NULL)
	  {
	  	if(temp->data==key)
	  	{
	  	 flag=1;
	  	 printf("\u001B[33m \n Element found...");
		}
		temp=temp->next;
	  }
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
	  while(temp->data!=NULL)
	  {
	  	if(temp->data==key)
	  	{
	  	  temp->data=rep;
	  	  flag=1;
	  	  return;
		}
		temp=temp->next;
	}
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
	for(i=temp;i!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->data>j->data)
			{
				t=i->data;
				i->data=j->data;
				j->data=t;
			}
		}
	}
while(temp!=NULL)
{
	printf("%d ", temp->data);
	temp=temp->next;
}
}
int number()
{
	struct node *temp=head;
	int num=0;
	while(temp!=NULL)
	{
		num++;
		temp=temp->next;
	}
	printf(" The number of nodees are : %d ",num);
}
int main()
{
    int choice;
    do
    {
        printf("\u001B[34m \n*********MENU********************");
        printf("\u001B[32m \u001B[4m \n1. Create  \n2. Display \n3. Insert at Beginning \n4. Insert at End ");
        printf("\u001B[32m \u001B[3m \n5. Insert at Any position \n6. Remove first node \n7. Remove Last Node");
        printf("\u001B[32m \u001B[3m \n8. Remove node at specified position \n9.Number of Nodes \n10.Reversed Elements ");
        printf("\u001B[32m \u001B[3m \n11.Search any element.. \n12. Replace any element \n13. Sort list elements \n14. Exit ");
        printf("\u001B[35m\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create_SLL();
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
            case 9: /*printf("\u001B[3C\nTotal Nosdes created :%d ",count)*/number();
            break;
            case 10:
			
			reverse();
            break;
            case 11:search();break;
            case 12:replace();break;
            case 13: printf("\u001B[36m \n Sorted elements are:"); sort();break;
            case 14:exit(0);
            default:printf("\u001B[3CInvalid Option");
        }
    }
    while(1);
    return 0;
}
