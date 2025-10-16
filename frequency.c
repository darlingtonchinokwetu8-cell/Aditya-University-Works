#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[10] = {0};
	int i;  // Array to store frequency of digits 0-9

    // Input string from user
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&& str[i]<='Z')
    	{
    		freq[str[i]-'A']++;
		}
	}
	for(i=0;i<26;i++)
    {
    if(freq[i]>0)
    {
    	printf("%c:%d\n",'A'+i,freq[i]);
	}
	}
    return 0;
}

