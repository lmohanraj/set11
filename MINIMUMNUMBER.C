 #include<stdio.h>
 int main()
 {
 	int n,i,j,t,a[10];
 	printf("no of elements\n");
 	scanf("%d",&n);
 	printf("enter elements\n");
 	for(i=0;i<n;i++)
 		scanf("%d",&a[i]);
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 		if(a[i]<a[j])
 		{
 			t=a[i];
 			a[i]=a[j];
 			a[j]=t;
 		}
 		}
 	}
 	printf("minimum number=%d",a[0]);
 	return 0;
 }
