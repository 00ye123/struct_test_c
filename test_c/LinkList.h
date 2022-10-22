#pragma once
#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	struct Node* next;
};

struct LinkList {
	int length;
	struct Node* head;
};
typedef struct Node Node;
typedef struct LinkList LinkList;

int addOneInLast(LinkList* l, int data);
int delOneOnLast(LinkList* l);
int addOneByIndex(LinkList* l, int index, int data);
int delOneByIndex(LinkList* l, int index);
Node* findOneByIndex(LinkList* l, int index);
int delAll(LinkList* l);