#include<stdio.h>
//#include<conio.h>

int main()
{
	int incoming, outgoing, buck_size,store = 0;
	//clrscr();
	printf("Enter the bucket size and outgoing rate:");
	scanf("%d %d",&buck_size,&outgoing);
	printf("Incoming packet size:");
	scanf("%d",&incoming);
	printf("Incoming packet size %d \n",incoming);
	if(incoming <= (buck_size - store))
	{
		store += incoming;
		printf("Bucket buffer size %d out of %d\n", store, buck_size);
	}
	else
	{
		printf("Dropped %d no of packets\n", incoming - (buck_size - store));
		printf("Bucket buffer size %d out of %d\n", store, buck_size);
		store = buck_size;
	}
	store = store - outgoing;
	printf("After outgoing %d packets left out of %d in buffer\n",store,buck_size);
	return 0;
	//getch();
}
