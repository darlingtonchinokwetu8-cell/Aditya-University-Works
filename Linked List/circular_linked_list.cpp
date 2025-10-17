#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL,*end=NULL;//firts and last nodes pointers
void display();
void create_node();//function prototypes
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
int count=0;//variable for storing the number of nodes
void create_nodes(void)
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
        end->next=head;// circular linked list
    }
    else
    {
        end->next=newnode;
        end=newnode;
        end->next=head;// circular linked list
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
    do
    {
    	printf("%d ",temp->data);
        temp=temp->next;
	}
    while(temp!=head);
}//end of display function
void insert_beg(void)
{
	int ele;
	struct node*newnode= (struct node*)malloc(sizeof(struct node));
	  if(newnode==NULL)
    {
        printf("\nMemory Full......");
        exit(0);
    }
    printf("\u001B[35m \nEnter Data into Node ");
    scanf("%d",&ele);
    newnode->data=ele;
    newnode->next=head;
    head=newnode;
    end->next=head;
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
    end->next=newnode;
    newnode->next=head;
    end=newnode;
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
		exit(1);
	}
	temp=head;
	head=temp->next;
	end->next=head;
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
	prev=head;
	temp=head;
	while(temp->next!=head)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=head;
	free(temp);
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
	if(pos>count+1|| pos<0)
	{
		printf("\n Invalid position position ");
	}
	temp=head;
	prev=NULL;
	if(pos==1)
	{
	remove_end();
	return ;
	}
	for(int i=1;i<pos;i++)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
	--count;
	printf("\u001B[35m \nNode removed at position %d ",pos);
	}
	void reverse(struct node *head)
	{
		if(head == NULL)
		{
			free(head);
		}
		else
		{
		reverse(head->next);
		printf("%d ",head->data);
		}
	}
void search()
{
	int key,flag=0;
	printf("\u001B[33m \nEnter key to search : ");
	scanf("%d",&key);
	struct node * temp;
	temp=head;
	if(head==NULL)
	{
		printf("List is Empty");
		return;
	}
	do
	{
		if(temp->data==key)
		{
			flag=1;
			printf("\u001B[35m \n element found ");
		}
		temp=temp->next;
	}
	while(temp!=head);
	temp=temp->next;
	if(!flag)
	{
		printf("\u001B[36m not existed");
	}
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
	  		flag=1;
	  	  temp->data=rep;
		}
	   temp=temp->next;
	  }
	   while(temp!=head);
	  	if(!flag)
		{
			printf("\u001B[32m \nElement not found ");
		}
	  free(temp);
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
        printf("\u001B[35m \n*********MENU********************");
        printf("\u001B[36m \u001B[3m \n1. Create_circular  \n2. Display \n3. Insert at Beginning \n4. Insert at End ");
        printf("\u001B[36m \u001B[3m \n5. Insert at Any position \n6. Remove first node \n7. Remove Last Node");
        printf("\u001B[36m \u001B[3m \n8. Remove node at specified position \n9.Number of Nodes \n10.Reversed Elements ");
        printf("\u001B[36m \u001B[3m \n11.Search any element.. \n12. Replace any element \n13. Sort elements \n14. Exit ");
        printf("\u001B[32m\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create_nodes();
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
            case 10: reverse(head);
            break;
            case 11:search();break;
            case 12:replace();break;
            case 13:printf("\n Sorted elements are ");sort();break;
            case 14:exit(0);
            default:printf("\u001B[3CInvalid Option");
        }
    }
    while(1);
    return 0;
}
