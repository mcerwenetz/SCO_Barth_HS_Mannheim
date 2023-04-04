#include <stdlib.h> 
#include <stdio.h>
#include "queue.h"


void enter(void* data, struct Queue* queue){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node*));
	new_node->data=data;
	new_node->next = NULL;
	//if queue is empty, initialize
	if(queue->tail == NULL && queue->head == NULL){
			queue->size=1;
			queue->tail= new_node;
			queue->head = queue->tail;
			return;
	}
	queue->tail->next = new_node;
	queue->tail=new_node;
	queue->size++;
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

