#include<stdio.h>
//#pragma pack(1)
enum months {January=1,Feb,March,April,May,June,July,August,September,October,Nov,Dec
	}m1;
 int main()
{
	switch(m1)
	{
		case January:
		case Feb:
		case March:
		case April:
		case Dec:
		case Nov:
		case October:
		printf("Summer\n");
		break;
		case May:
		case June:
		case July:
		printf("Winter\n");
		break;
		case August:
		case September:	
			printf("Automn\n");
			break;
		
	}
	printf("%d",sizeof(m1));
}

