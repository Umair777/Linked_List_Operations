#include"header.h"
#include"prototype.h"
struct node* creatlinklist() 
{
	struct node *strt;
	printf("%s : BEGIN\n",__func__);
	strt = creatnode();
	printf("%s : END\n",__func__);
	return strt;
}


















