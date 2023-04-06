#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *link;
}Node;

Node *newNode(int data){
	Node *n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->link = NULL;
	
	return n;
}

void pushHead(Node **HEAD, Node* node){
	node->link = *HEAD;
	*HEAD = node;
}

void pushTail(Node **HEAD, Node* node){
	Node *cur = *HEAD;
	
	if (cur == NULL){
		pushHead(HEAD, node);
	}
	
	while (cur->link != NULL){
		cur = cur->link;
	}
	cur->link = node;
}

void pushMid(Node **HEAD, Node* node, int key){
	Node *cur = *HEAD;
	
	while(cur != NULL && cur->data != key){
		cur = cur->link;
	}
	
	if(cur == NULL){
		return;
	}else{
		Node *temp = cur->link;
		cur->link = node;
		node->link = temp;
	}
}

int popHead(Node **HEAD){
	Node *deleted = *HEAD;
	*HEAD = deleted->link;
	
	int data = deleted->data;
	free(deleted);
	return data;
}

int popTail(Node **HEAD){
	Node *cur = *HEAD;
	Node *prev = NULL;
	
	if(cur == NULL) return -1;
	
	while(cur->link != NULL){
		prev = cur;
		cur = cur->link;
	}
	
	if(prev != NULL){
		prev->link = NULL;
	}
	
	Node *deleted = cur;
}

void displayTree(Node **HEAD){
	Node *cur = *HEAD;
	while(cur != NULL){
		printf("%d->", cur->data);
		cur = cur->link;
	}
	printf("NULL");
}

int main(){
	Node *HEAD = NULL;
	pushHead(&HEAD, newNode(1));
	pushHead(&HEAD, newNode(2));
	pushTail(&HEAD, newNode(100));
	pushTail(&HEAD, newNode(200));
	pushMid (&HEAD, newNode(50), 2);
	pushMid (&HEAD, newNode(60), 50);
	printf("%d has been deleted\n", popHead(&HEAD));
	displayTree(&HEAD);
}
