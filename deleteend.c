#include"header.h"
#include"prototype.h"
struct node deleteend(struct node *start)
{
	struct node *last, *temp, *secondlast;
	temp=start;
	int flag=0;
	printf("%s : begin\n",__func__);
	while(temp->Next !=NULL )
	{
		secondlast=temp;
		temp=temp->Next;
	}
		if(temp->Next==NULL)
		{
			last=temp;
			free(last);
			secondlast->Next=NULL;
		}
printf("%s : End\n",__func__);
}
