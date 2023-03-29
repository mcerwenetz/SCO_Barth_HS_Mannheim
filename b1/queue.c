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

void enter(void* data, struct Queue queue){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node*));
	new_node->data=data;
	new_node->next = NULL;
	queue.tail=new_node;
}

void* leave(struct Queue queue){
	struct Node* to_delete = queue.head;
	void* data = to_delete->data;
	queue.head = queue.head->next;
	free(to_delete);
	return data;
}

int isEmpty(struct Queue queue){
	return queue.size == 0;
}


int main(){
		struct Queue queue;
		int to_enter = 10;
		void* enter_void = &to_enter;
		enter(enter_void, queue);
		void* data = leave(queue);
		int data_in_int = *(int*) data;
		printf("%d", data_in_int);
}

