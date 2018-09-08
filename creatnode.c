#include"header.h"  
#include"prototype.h"

// A New Node will always Contain a New Info but wont have the link to any other node.

struct node* creatnode()
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	if(!temp)
	{
	perror("malloc");
	exit(EXIT_FAILURE);
	}
	temp->Next = NULL;
	temp->info = i++;	
	return temp;
}

