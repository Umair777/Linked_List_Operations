#include"header.h"
#include"prototype.h"
int deleteatnth(struct node *start)
{
	struct node *temp1, *secondlast;
	int i=0,n;
	printf("give the position of the node to be deleted\n");
	scanf("%d",n);
	temp1=start;
	while(i!=n)
	{
		secondlast=temp1;
		temp1=temp1->Next;
		i++;
	}
	if(i==n)
	{
		printf("%s:Begin\n",__func__);
		secondlast->Next=temp1->Next;
		temp1->Next=NULL;
		printf("Node at %d location has been deleted contained info was %d\n",i,temp1->info);
		free(temp1);
	}
		printf("%s:End\n",__func__);
}
