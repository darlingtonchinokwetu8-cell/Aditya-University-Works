##include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, count=0,flag = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]",&str);
    
    for(i=0;str[i]!='\0';i++)
    {
    	count++;
    	
	}
	len=count;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

