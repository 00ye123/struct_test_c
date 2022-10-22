#include"LinkList.h"
int main(void) {
	LinkList l;
	l.head = (Node*) malloc(sizeof(Node));
	l.length = 0;
	l.head->data = -1;
	l.head->next = NULL;

	for (int i = 0; i < 10; i++) {
		addOneInLast(&l,i+1);
	}
	delOneByIndex(&l, 5);
	addOneByIndex(&l, 5, 100);
	delAll(&l);
	for (int i = 0; i < l.length; i++) {
		printf("Öµ£º%d\n", findOneByIndex(&l,i + 1)->data);
	}
	return 0;
}

