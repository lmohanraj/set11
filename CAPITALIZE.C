 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int n,i;
 	char s[100];
 	printf("input\n");
 	gets(s);
 	n=strlen(s);
 	s[0]=s[0]-32;
 	for(i=0;i<n;i++)
 	{
 		if(s[i]==' ')
 		s[i+1]=s[i+1]-32;
 	}
 	puts(s);
 	return 0;
 }
