#include<stdio.h>
#include<stdlib.h>
int i,j,n,*p,c,d;
main(void)
{
	printf("nhap n:");
	scanf("%d",&n);
	p=(int*)malloc(n*n*sizeof(int));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("p[%d][%d]=",i,j);
			scanf("%d",p+i*n+j);
		}
	}
	c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i*n+j)!=*(p+j*n+i))
			c=1;
		}
	}
	if(c==0) printf("day la ma tran doi xung\n");
	else printf("khong phai ma tran doi xung\n");
	d=0;
	for(i=0;i<n;i++)
	{   if(*(p+i+i)==1)
		{for(j=0;j<n;j++)
		   {
			if(i!=j && *(p+i*n+j)!=0)
			d=1;
		   }
	    }
	}
	if(d==0) printf("day la ma tran don vi\n");
	else printf("khong phai ma tran don vi");
	free(p);
}
