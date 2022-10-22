#include"LinkList.h"
int addOneInLast(LinkList* l, int data) {
	if (l == NULL)return 0;
	Node* p;
	p = l->head;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = (Node*)malloc(sizeof(Node));;
	if (p->next == NULL) {
		printf("·ÖÅäÊ§°Ü");
		return 0;
	}
	l->length++;
	p->next->data = data;
	p->next->next = NULL;
	return 1;
}

Node* findOneByIndex(LinkList* l, int index) {
	if (NULL == l || index > l->length || index < 1)return NULL;
	Node* p = l->head;
	for (int i = 0; i < index; i++) {
		p = p->next;
	}
	return p;
}

int delOneByIndex(LinkList* l, int index) {
	if (NULL == l || index > l->length || index < 1)return 0;
	Node* p = l->head;
	Node* q = NULL;
	for (int i = 0; i < index - 1; i++) {
		p = p->next;
	}
	q = p->next;
	p->next = q->next;
	free(q);
	l->length--;
	return 1;
}

int addOneByIndex(LinkList* l, int index, int data) {
	if (NULL == l || index > l->length || index < 1)return 0;
	Node* p = l->head;
	for (int i = 0; i < index; i++) {
		p = p->next;
	}
	Node* q = (Node*)malloc(sizeof(Node));
	if (NULL == q) {
		printf("·ÖÅäÊ§°Ü£¡");
		return 0;
	}
	q->next = p->next;
	q->data = data;
	p->next = q;
	l->length++;
	return 1;
}

int delOneOnLast(LinkList* l) {
	if (NULL == l || l->length == 0)return 0;
	Node* p = l->head;
	Node* q = p;
	while (q->next != NULL) {
		q = q->next;
	}
	//printf("µÚ\n");
	while (p->next != q) {
		p = p->next;
		//	printf("ÒÆ¶¯\n");
	}
	p->next = NULL;
	l->length--;
	free(q);
	return 1;
}
int delAll(LinkList* l) {
	if (NULL == l || l->length == 0)return 0;
	int len = l->length;
	for (int i = 0; i < len; i++) {
		delOneOnLast(l);
	}
}