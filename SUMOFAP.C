 #include<stdio.h>
 int main()
 {
 	int a,n,d,i,r=0;
 	printf("input");
 	scanf("%d%d%d",&a,&d,&n);
 	for(i=0;i<n;i++)
 	{
 		r=r+(a+(n*d));
 	}
 	printf("\nresult=%d",r/2);
 	return 0;
 }
