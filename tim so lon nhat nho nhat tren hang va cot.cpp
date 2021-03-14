#include<stdio.h>
#include<stdlib.h>
int i,j,n,m,*p,max1,min1,max2,min2;
main(void)
{
	printf("nhap n,m:");
	scanf("%d%d",&n,&m);
	p=(int*)malloc(n*m*sizeof(int));
	if(p==NULL)
	{
		printf("cap phap khong thanh cong");
		exit;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("p[%d][%d]=",i,j);
			scanf("%d",p+i*m+j);
			
		}
	}
	
/*	for(i=0;i<n;i++)
	{  
	    max1=*(p+i*m+0);
	    for(j=0;j<m;j++)
		if(*(p+i*m+j)>max1) max1=*(p+i*m+j);
	    printf("\nso lon nhat cua hang thu %d la: %d",i,max1);
	}*/
	max1=*p;
		for(j=0;j<m;j++)
	{  max1=*(p+0*m+j);
	    for(i=0;i<n;i++)
	    {
	    
		if(*(p+i*m+j)>max1) max1=*(p+i*m+j);
	  
	}
	      printf("\nso lon nhat cua cot thu %d la: %d",j,max1);
	}
	free(p);
}
