#include <stdio.h>
#include<string.h>
int main() 
{
	int i,n,l;
	char s[20];
	printf("input");
	scanf("%s",s);
	l=strlen(s);
	printf("\nno of char to print\n");
	scanf("%d",&n);
	for(i=l-n;i<l;i++)
	printf("%c",s[i]);
	return 0;
}
