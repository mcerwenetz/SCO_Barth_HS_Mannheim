#include <stdlib.h> 
#include <stdio.h>
#include "queue.h"


void enter(void* data, struct Queue* queue){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node*));
	new_node->data=data;
	new_node->next = NULL;
	//if queue is empty, initialize
	if(queue->tail == NULL && queue->head == NULL){
			queue->size=0;
	}
	queue->size++;
	queue->tail=new_node;
	//first and only node means head is the tail
	if(queue->size == 1){
		queue->head = queue->tail;
	}else{
		queue->head->next = new_node;
	}
}

void* leave(struct Queue* queue){
	struct Node* to_delete = queue->head;
	void* data = to_delete->data;
	queue->head = queue->head->next;
	free(to_delete);
	queue->size--;
	//if last element deleted, tail is head is NULL
	if(queue->size == 0){
		queue->tail = NULL;
	}
	return data;
}

int isEmpty(struct Queue queue){
	return queue.size == 0;
}

