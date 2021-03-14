#include<stdio.h>
#include<stdlib.h>
int m,n,p,k,i,j,*a,*b,*c,S;
main(void)
{
	printf("nhap m,n,p:\n");
	scanf("%d%d%d",&m,&n,&p);
	a=(int*) malloc(m*p*sizeof(int));
	if(a==NULL)
	{
		printf("ko cap phat dc");
		exit;
	}
	b=(int*) malloc(p*n*sizeof(int));
	if(b==NULL)
	{
		printf("ko cap phat dc");
		exit;
	}
	c=(int*) malloc(m*n*sizeof(int));
	if(c==NULL)
	{
		printf("ko cap phat dc");
		exit;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",a+i*p+j);
		}
	}
	
	for(i=0;i<p;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",b+i*n+j);
		}
	}
	
		for(i=0;i<m;i++)
	{    	*(c+i*n+j)=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<p;k++)
			{*(c+i*n+j)+=(*(a+i*p+k)*(*(b+k*n+j)));}
			
			
		}
	
	}
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",*(c+i*n+j));
	    }
	    printf("\n");
    }    
}
