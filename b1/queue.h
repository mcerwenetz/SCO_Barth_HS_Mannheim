#ifndef QUEUE_H
#define QUEUE_H


struct Node{
	void* data;
	struct Node* next;
	};

struct Queue{
	
	struct Node* head = NULL;
	struct Node* tail = NULL;
	int size;
};

void enter(void* data, struct Queue* queue);

void* leave(struct Queue* queue);

int isEmpty(struct Queue queue);

#endif
