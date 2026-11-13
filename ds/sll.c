#include"header.h"
int main()
{
SLL *headpointer=0;
int op,c;

while(1)
{
printf("enter your choice\n");
printf("1)add begin 2)add end 3)add middle 4)print node 5)count node 6)save file 7)read file 8)reverse print 9)print rec 10)reverse record 11)delete all 12)delete node 13)search node 14)sort data 15)reverse link 16)exit\n");
scanf("%d",&op);
switch(op)
{
	case 1 :addBegin(&headpointer);break;
	case 4 :printNode(headpointer); break;
	case 5 :c=countNode(headpointer);
		printf("c=%d\n",c);break;
	case 6 :saveFile(headpointer);break;
	case 2 :addEnd(&headpointer);break;
}
}
}

void addBegin(SLL **ptr)
{
SLL *new;
new=malloc(sizeof(SLL));
printf("enter rollno name marks\n");
scanf("%d%s%f",&new->rollno,new->name,&new->mark);
new->next=*ptr;
*ptr=new;

}

void printNode(SLL *ptr)
{
if(ptr==0)
{
printf("no record found\n");
return;
}
while(ptr)
{
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->mark);
ptr=ptr->next;
}
}

int countNode(SLL *ptr)
{
if(ptr==0)
{
printf("no record found\n");
return;
}
int c=0;
while(ptr)
{
c++;
ptr=ptr->next;
}
return c;
}


void saveFile(SLL *ptr)
{
if(ptr==0)
{
printf("no record found\n");
return;
}

FILE *fp;
fp=fopen("student.txt","w");

while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->mark);
ptr=ptr->next;
}
printf("-----file saved-----\n");
fclose(fp);
}


void addEnd(SLL **ptr)
{
SLL *new;
new=malloc(sizeof(SLL));
printf("enter rollno name mark\n");
scanf("%d%s%f",&new->rollno,new->name,&new->mark);
new->next=0;
if(*ptr==0)
	*ptr=new;
else
{
SLL *last=*ptr;
while(last->next)
	last=last->next;
last->next=new;
}
}

