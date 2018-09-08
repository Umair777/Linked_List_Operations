#include"header.h"
#include"prototype.h"
int insertmenu()
{
	int choice;
	printf("%s : begin\n",__func__);
	printf("press 1 to insert at beginning \n");
	printf("press 2 to insert at End \n");
        printf("press 3to insert at Nth location of linked list \n");
        printf("press 4 to insert the key \n");
        printf("Enter the Choice\n");
        scanf("%d",&choice);
 	printf("%s : end\n",__func__);
	return choice;
}

