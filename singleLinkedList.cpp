#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Single linked list

//Insertion
//1. insertion isempty
//node pertama akan menjadi head 
//node pertama akan menjadi tail

//2. insertion non-isempty
//Push head = insert paling depan
// 31 | NULL --> 10 | 2000 --> 20 | 3000

// 3000         1000          2000
// Change pointer 31 to 1000
// Change head to 3000

//Push mid  = insert di tengah
//Push Tail = insert paling belakang
//Pophead, popmid, poptail, pop = mengambil data


struct node {
	char name[50];
	int age;
	struct node *next; //Penunjuk node setelahnya
};

struct node *head = NULL;
struct node *tail = NULL;

struct node *createNewNode(char name[], int age){
	struct node *newData = (struct node*)malloc(sizeof(struct node));
	
	newData->age = age;
	strcpy(newData->name, name);
	newData->next = NULL;
	
	return newData;
}

void pushHead(char name[], int age){
	struct node *newData = createNewNode(name, age);
	
	if(head == NULL){
		head = tail = newData;
	}
	
	else{
		newData->next = head;
		head = newData;
	}
}

void pushTail(char name[], int age){
	struct node *newData = createNewNode(name, age);
	if(head == NULL){
		head = tail = newData;
	}
	else{
		tail->next = newData;
		tail = newData;
	}
}

void view(){
	struct node *curr = head;
	
	while(curr != NULL){
		printf("%s %d\n", curr->name, curr->age);
		curr = curr->next;
	}
}

int main(){
	int menuSelection;
	printf("Linked List Insertion:\n");
	printf("______________________\n");
	printf("1. PushHead\n2. PushTail\n>");
	scanf("%d", &menuSelection);
	
	pushHead("Siswa", 10);
	pushHead("Arif" , 11);
	pushTail("Dina" , 12);
	view();
	return 0;
}

//Pop and push mid.









