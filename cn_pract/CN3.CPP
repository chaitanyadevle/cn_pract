#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

void main()
{
	int ip1,ip2,ip3,ip4,end1,borrow=0,host=0,block=0,size,s=0;
	int n=0,sub=0,i=0,m[10],j=0;
	clrscr();
       //printf("Enter the address:\n");
	printf("octet 1=");
	scanf("%d",&ip1);
	printf("octet 2=");
	scanf("%d",&ip2);
	printf("octet 3=");
	scanf("%d",&ip3);
	printf("octet 4=");
	scanf("%d",&ip4);
	printf("Enter address after /=");
	scanf("%d",&end1);
	printf("%d. %d. %d. %d/ %d",ip1,ip2,ip3,ip4,end1);
	printf("\n");
	borrow = end1-24;
	//printf("\nNumber of bits borrow=%d",borrow);
	host = 32-end1;
	//printf("\nNumber of bits per host=%d",host);
	sub = pow(2,borrow);
	//printf("\nNumber of subnets=%d",sub);
	n = (pow(2,host)-2);
	//printf("\nNumber of hosts per subnet=%d",n);
	if(end1==25)
	{
		block=1;
		size=128;
	}
	if(end1==26)
	{
		block=2;
		size=192;
	}
	if(end1==27)
	{
		block=3;
		size=224;
	}
	if(end1==28)
	{
		block=4;
		size=240;
	}
	if(end1==29)
	{
		block=5;
		size=248;
	}
	if(end1==30)
	{
		block=6;
		size=252;
	}
	if(end1==31)
	{
		block=7;
		size=254;
	}
	if(end1==32)
	{
		block=8;
		size=255;
	}

	printf("\nBlock is= %d",block);
	printf("\nMask is= %d",size);
	s = 256 - size;
	printf("\nBlock size is= %d",s);
	printf("\nSubnets are:\n");
	for(i=0;i<=size;i++)
	{
	m[i]=s*i;
	if(m[i]<=size)
	printf("%d\t",m[i]);
	else
	break;
	}
	i--;
	for(j=0;j<=i;j++)
	{
	printf("\n%d. %d. %d. %d",ip1,ip2,ip3,m[j]);
	}
	getche();
}


