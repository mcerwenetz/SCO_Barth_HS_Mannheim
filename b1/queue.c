#include <stdlib.h> 
#include <stdio.h>

struct Node{
	void* data;
	struct Node* next;
	};

struct Queue{
	
	struct Node* head;
	struct Node* tail;
	int size;
};

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


int main(){
		struct Queue queue;
		int to_enter = 10;
		int to_enter_second = 20;
		void* enter_void = &to_enter;
		enter(enter_void, &queue);
		enter(&to_enter_second, &queue);
		void* data = leave(&queue);
		int data_in_int = *(int*) data;
		printf("%d\n", data_in_int);
		printf("%d\n", *(int*)  leave(&queue));
}

