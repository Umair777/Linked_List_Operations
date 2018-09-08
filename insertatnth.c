#include"header.h"
#include"prototype.h"
//int l = 300;
int insertatnth(struct node *strt)
{
	struct node *temp;
	int n,i=1;
	temp = creatnode();
	printf("give postion on which you want to insert new node :\n");
	scanf("%d",&n);
	while(strt->Next)
	{
		i++;
		strt=strt->Next;
			if(i==n)
			{	
				temp->Next=strt->Next;
				strt->Next=temp;
			}
	}
	return 0;
}
