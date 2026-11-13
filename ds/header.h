#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
typedef struct student
{
int rollno;
char name[20];
float mark;
struct student *next;
}SLL;

void addBegin(SLL **);
void addEnd(SLL **);
void printNode(SLL *);
int countNode(SLL *);
void saveFile(SLL *);
