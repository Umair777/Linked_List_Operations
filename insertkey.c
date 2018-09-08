#include"header.h"
#include"prototype.h"
//int m = 400;
int insertkey(struct node *strt)
{
	struct node *temp;
	int n,i=0;
	temp = creatnode();
	printf("give the key_info after which the new node to be inserted\n");
	scanf("%d",&n);
	while(strt->Next)
	{
		strt = strt->Next;	
		if(strt->info==n)
		{
			temp->Next=strt->Next;
			strt->Next=temp;
		}
	}
	return 0;
}
