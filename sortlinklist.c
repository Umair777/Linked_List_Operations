#include"header.h"
#include"prototype.h"
int sortlinklist(struct node *start)
{
	struct node *temp1, *temp2, *swap;
	int i=0;
	int j=0;
	printf("%s : Begin...\n",__func__);
	printf("starting info is %d\n",start->info);
	while(start->Next)
	{
		temp1=start;
		printf("temp1 info %d\n",temp1->info);
		temp2=temp1->Next;
		printf("temp2 info %d\n",temp2->info);
		if(temp1->info > temp2->info)
		{
			i++;
			printf("loop no : %d\n",i);
			swap->info = temp2->info;
			temp2->info = temp1->info;
			temp1->info = swap->info;
			start = temp1;
		}

	}
			displaylinklist(start); 	
	printf("%s : End\n",__func__);
	return 0;
}
