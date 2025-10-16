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
void revers();
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
    newnode->next=head;
    head=newnode;
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
    newnode->next=NULL;
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
		free(head);
		exit(1);
	}
	temp=head;
	head=temp->next;
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
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
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
	if(pos>count || pos<0)
	{
		printf("\n Invalid position position ");
	}
	temp=head;
	prev=NULL;
	if(pos==1)
	{
		temp=head;
		head=head->next;
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
	void revers(struct node *head)
	{
		if(head == NULL)
		{
			printf("\u001B[36m \u001B[3 BYEEEEEEEEEE");
			free(head);
		}
		else
		{
		revers(head->next);
		printf("%d ",head->data);
		}
	}
int main()
{
    int choice;
    do
    {
        printf("\u001B[34m \n*********MENU********************");
        printf("\u001B[32m \u001B[3m \n1. Create  \n2. Display \n3. Insert at Beginning \n4. Insert at End ");
        printf("\u001B[32m \u001B[3m \n5. Insert at Any position \n6. Remove first node \n7. Remove Last Node");
        printf("\u001B[32m \u001B[3m \n8. Remove node at specified position \n9.Number of Nodes \n10.Reversed Elements ");
        printf("\u001B[32m \u001B[3m \n11. Exit ");
        printf("\u001B[35m\nEnter Your Choice: ");
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
            case 10: revers(head);
            break;
            case 11:exit(0);
            default:printf("\u001B[3CInvalid Option");
        }
    }
    while(1);
    return 0;
}
