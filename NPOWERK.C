 #include<stdio.h>
 int main()
 {
 	int n,k,i,r=1;
 	printf("inputs\n");
 	scanf("%d%d",&n,&k);
 	for(i=0;i<k;i++)
 	{
 	r=r*n;	
 	}
 	printf("result=%d",r);
 	return 0;
 }
