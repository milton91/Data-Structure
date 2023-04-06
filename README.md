# Introduction to Data-Structure (Session 02)
A data structure is an arrangement of data, either in computer's memory or on disk storage.

Some common examples of data structures include:
1. Arrays
2. Linked lists
3. Queues
4. Stacks
5. Binary trees
6. Hash tables

## Arrays
A collection of similar data elements

Data elements have the same data type

## Linked List
A very dynamic data structure in which the elements can be added to or deleted from anywhere at will.

Each element is called a node

## Queue
The element that was inserted first is the first one to be taken out

The element in a queue are added at one end called the rear and removed from the other end called the front

## Stacks
Stack can be represented as a linear array

Every stack has a variable TOP associated with it

LIFO (Last In First Out) or FILO (First In Last Out)

## Binary Trees
A data structure which is defined as a collection of elements called nodes

Every node contains a left pointer, a right pointer, and a data element

# Linked List (Session 3)
## Linked List Introduction
head

 |
 
|10|  | -> |35|  | -> |27|  | -> NULL

Example of a list whose nodes contain two fields: an integer value and a link to the next node

Linked list which node contain only a single link to other node is called is a **single linked list**

## Array v. Linked List
Array:
1. Linear collection of data elements
2. Store value in consecutive memory location
3. Can be random in accessing of data

Linked List:
1. Linear collection of nodes
2. Does not store its nodes in consecutive memory locations
3. Can be accessed only in sequential manner

## Memory allocation
To use linked list you will need to use Dynamic Memory Allocation
```
int  *px = (int *) malloc(sizeof(int));
char *pc = (char *) malloc(sizeof(char));
*px = 205;
*pc = ‘A’;
printf( “%d %c\n”, *px, *pc );
free(px);
free(pc);
```
## Single Linked List
To create a linked list, we first need to define a node structure for the list

```
struct Node{
  int value;
  struct Node *next;
};
//Head is pointer to the fisrt element in our linked list
struct Node *head = 0
```

**See Repo for the full code**
