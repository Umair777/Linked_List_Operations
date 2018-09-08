#include"header.h"
#include"prototype.h"
int sortlist(struct node *start)
{
struct node *temp1,*temp2;
while(start->Next)
	{
	printf("starting info= %d \n",start->info);
	temp1=start->Next;
	printf("Next to starting info= %d \n",start->info);
	if(start->info > temp1->info)
		{
			temp2->info = temp1->info;
			temp1->info = start->info;
			start->info = temp2->info;
		}
	start=start->Next;
	}
return 0;
}

