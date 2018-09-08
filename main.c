#include"header.h"
#include"prototype.h"
int i;
int main()
{
	struct node* start ;
	int choice;
	i = 1000;
	printf("%s : begin\n",__func__);
	while(1)
	{
		//			start=NULL;
		choice = displaymenu();	
		switch(choice)
		{
			case 1 : if(start)
				 {
					 printf("linked listed already created \n");
				 }
				 else
				 {	
					 start=creatlinklist();
				 }			
				 break;
			case 2 : if(!start)
				 
					printf("no link list\n");
				else
					 insertnode(start);
				 break;
			case 3 : deletion(start);
				 break;
			case 4 : sortlinklist(start);
				 break;
			case 5 : displaylinklist(start);
				 break;
			case 6 : exit(EXIT_FAILURE); 
				 break;
		}
	}
}

