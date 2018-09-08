#include"header.h"
#include"prototype.h"
struct node *deletenode()
{
	struct node *ptr,*start;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(!ptr)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	start = (struct node *)malloc(sizeof(struct node));
printf("%s : begin",__func__);
while(start->Next)
{	
	ptr=start->Next;
}
printf("%s : end",__func__);
free(ptr);	
}


