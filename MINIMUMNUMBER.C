 #include<stdio.h>
 int main()
 {
 	int i,j,t,a[10];
 	printf("enter elements\n");
 	for(i=0;i<10;i++)
 		scanf("%d",&a[i]);
 	for(i=0;i<10;i++)
 	{
 		for(j=0;j<10;j++)
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
