 #include"header.h"
#include"prototype.h"
int displaylinklist(struct node* start)
{
        printf("%s : Begin\n",__func__);
	int i =1;
        while(start->Next)
        {
                start = start->Next;
                printf("node %d have info %d\n",i,start->info);
                i++;
        }
        printf("%s : End\n",__func__);
return 0;
}

