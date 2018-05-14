#include<stdio.h>
int main()
{
	int one,two,three,four;
	
	
	printf("Enter the four octat of ip addr:");
	scanf("%d%d%d%d",&one,&two,&three,&four);

	if(one>=1&&one<=126)
	{
		printf("Class A");
		printf("\nNetwork ID=%d\n",one);
		printf("\nHost ID=%d.%d,%d\n",two,three,four);
	}
	
	if(one>=128&&one<=191)
	{
		printf("Class B");
		printf("\nNetwork ID=%d.%d",one,two);
		printf("\nHost ID=%d.%d\n",three,four);
	}

	if(one>=192&&one<=223)
	{
		printf("Class C");
		printf("\nNetwork ID=%d.%d.%d",one,two,three);
		printf("\nHost ID=%d\n",four);
	}

	if(one>=224&&one<=239)
	{
		printf("Class D");
	}

}
