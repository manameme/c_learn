#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	
	printf("What string do you want to remove?\n");
	gets(arr);
	
	strrev(arr);
	printf("The reverse of the string is\n%s\n", arr);
	
	return(0);
	
}