#include"header.h"
#include"prototype.h"
int deletemenu()
{
	int choice;
	printf("%s : begin\n",__func__);
	printf("press 1 to delete from the beginning \n");
	printf("press 2 to delete from the End \n");
        printf("press 3 from the Nth location of linked list \n");
        printf("press 4 delete from the key \n");
        printf("press 5 to go to main menu \n");
        printf("Enter the Choice\n");
        scanf("%d",&choice);
 	printf("%s : end\n",__func__);
	return choice;
}

