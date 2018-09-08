#include"header.h"
#include"prototype.h"
int insertbeg(struct node *strt)
{
	struct node *temp;
	temp = creatnode();
	temp->Next = strt->Next;
	strt->Next= temp;
	return 0;
}
