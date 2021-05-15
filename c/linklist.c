#include<stdio.h>

typedef struct Node{
	int value;
	struct node* front;
	struct node* next;
} Node;

node* create(){
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = node->front = NULL;
	return node;
}
void insert(Node* head, int value){
	if(head == NULL){
		printf("Error, empty list\n");
		return;
	}
	Node* temhead = head;

	Node* new = (Node*)malloc(sizeof(Node));
	new->value = value;
	new->next = new->front = NULL;

}

int main(void){

	return 0;
}
