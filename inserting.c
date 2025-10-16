 #include<stdio.h>
int main()
{
	int a[20],i,n,pos,key, arr[20],k;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be inserted:\n");
	scanf("%d",&key);
	printf("enter position of the element:\n");
	scanf("%d is index",&pos);

	for(i=0;i<pos;i++)
	{
		arr[i] = a[i];
	}
	arr[pos]=key;
	//pos--;
	for ( i=pos; i<n;i++)
		arr[i+1] = a[i];
	printf("elements after  inserting\n");
	for ( k=0; k<n+1; k++)
		printf("%d\t", arr[k]);
	
	return 0;
}
