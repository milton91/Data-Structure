#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	char name[100];
	int age;
	struct Node *next;
}Node;

const int SIZE = 7;
Node *table[SIZE];

Node *createNode(char *name, int age){
	Node *n = (Node *)malloc(sizeof(Node));
	strcpy(n->name, name);
	n->age = age;
	n->next = NULL;
	return n;
}

int hash(char *key){
	int len = strlen(key);
	int total = 0;
	for (int i=0; i<len; i++){
		total += key[i];
	}
	return total%SIZE;
}

Node *pushTail(Node *head, Node *newData){
	if(head == NULL){
		return newData;
	}else{
		Node *cur = head;
		while (cur->next != NULL){
			cur = cur->next;
		}
		cur->next = newData;
		return head;
	}
}

void insertNode(char *name, int age){
	Node *n = createNode(name, age);
	int index = hash(name);
	table[index] = pushTail(table[index], n);
}

Node *popMid (Node *head, char *key){
	if(head == NULL){
		return NULL;
	}else{
		Node *cur = head;
		Node *prev = NULL;
		
		while (cur != NULL && strcmp(cur->name, key) != 0){
			cur = cur->next;
			prev = cur;
		}
		if (cur == NULL){
			return NULL;
		}else{
			Node *deleted = cur;
			if (prev != NULL){
				prev->next = deleted->next;
				free(deleted);
				
				return head;
			}else{
				Node *next = deleted->next;
				free(deleted);
				return next;
			}
		}
	}
}

void deleteNode(char *name){
	int index = hash(name);
	table[index] = popMid(table[index], name);
}

Node *search(char *key){
	int index = hash(key);
	
	Node *cur = table[index];
	while(cur != NULL && strcmp(cur->name, key) != 0){
		cur = cur->next;
	}
	return cur;
}

void printAll(){
	for (int i=0; i<SIZE; i++){
		Node *cur = table[i];
		printf("[%d]: ", i);
		while(cur != NULL){
			printf("%s | %d -> ", cur->name, cur->age);
			cur = cur->next;
		}printf("NULL\n");
	}printf("end of table");
}

int main(){
	for (int i=0; i<SIZE; i++){
		table[i] = NULL;
	}
	
	insertNode("Luna", 20);
	insertNode("Haewon", 30);
	insertNode("Haewon", 30);
	
	//deleteNode("Haewon");
	
	printAll();
	
	return 0;
}










