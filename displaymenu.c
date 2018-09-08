#include"header.h"
#include"prototype.h"
int displaymenu()
{
        int choice;
        printf("press 1 to create linked list \n");
        printf("press 2 to insert node in the linkedlist\n");
        printf("press 3 to delete node of the linkedlist\n");
        printf("press 4 to sort linked list \n");
        printf("press 5 to display linked list \n");
        printf("press 6 to exit \n");
        printf("Enter the Choice\n");
        scanf("%d",&choice);
        return choice;
}

