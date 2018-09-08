#include"header.h"
#include"prototype.h"
struct node *deletebeg(struct node *start)
{
	struct node *temp1;
	int flag=0;
	printf("%s : begin\n",__func__);
	while(start->Next)
	{	
	if(flag==0)
		{
		temp1 = start->Next;
			start->Next=start->Next->Next;
//			start=temp1;
			free(temp1);
			flag = 1;
		}
		else
		{
			break;
		}
//		start=start->Next;
	}
	printf("node has been [deleted] from [beginning]\n");
	printf("%s : end\n",__func__);
}


