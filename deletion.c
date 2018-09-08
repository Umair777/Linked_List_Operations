#include"header.h"
#include"prototype.h"
int deletion(struct node *strt)
{	
	int choice;
	printf("%s : begin\n",__func__);
	choice = deletemenu();
	switch(choice)
	{
		case 1 : deletebeg(strt);
			 break;
		case 2 : deleteend(strt);
			 break;
		case 3 : deleteatnth(strt);
			 break;
		case 4 : deletekey(strt);
			 break;
		case 5 : displaymenu();
			 break;
	}
return choice;
}
