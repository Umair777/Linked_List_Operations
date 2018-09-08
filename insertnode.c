#include"header.h"
#include"prototype.h"
int insertnode(struct node *strt)
{	
	int choice;
	printf("%s : begin\n",__func__);
	choice = insertmenu();
	switch(choice)
	{
		case 1 : insertbeg(strt);
			 break;
		case 2 : insertend(strt);
			 break;
		case 3 : insertatnth(strt);
			 break;
		case 4 : insertkey(strt);
			 break;
	}

}
