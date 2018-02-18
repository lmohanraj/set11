#include <stdio.h>
int main()
{
	int n;
	printf("input\n");
	scanf("%d",&n);
	if(n%2!=0)
	printf("output=%d",n);
	else
	{
		while(n%2==0)
		{
			n=n/2;
			if(n%2!=0)
			{
				printf("output=%d",n);
				break;
			}
		}
	}
	return 0;
}
