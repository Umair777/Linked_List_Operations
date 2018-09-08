#include"header.h"
#include"prototype.h"
int insertend(struct node *strt)
{
	struct node* temp;
	temp = creatnode();
	while(strt->Next)
	{
		strt=strt->Next;
	}
	strt->Next = temp;

	return 0;
}
