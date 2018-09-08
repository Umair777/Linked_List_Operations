#include"header.h"
#include"prototype.h"
int deletekey(struct node *start)
{
	int i=0,j,k;
	struct node *temp1,*secondlast;
		printf("%s : Begin\n",__func__);
	printf("enter ID  number of node to be deleted\n");
	scanf("%d",&k);
//	printf("info of deleted node was %d\n",k);
	temp1=start;
	while(temp1->Next)
	{
		secondlast=temp1;
		temp1=temp1->Next;
		i++;
		if(temp1->info == k)
		{
			printf("node is at %d\n",i);
			secondlast->Next=temp1->Next;
			temp1->Next=NULL;
			printf("info %d has been deleted\n",temp1->info);
			j=i;
			free(temp1);
		}
		if(j==i)
		{
			break;
		}

	}
}
