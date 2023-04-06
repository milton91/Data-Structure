# Array and Pointer Review (Session 1)
Materi di repo Algorithm and Programming

# Introduction to Data-Structure (Session 2)
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

# Linked List I (Session 3)
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

# Linked List II (Session 4)
## Circular Single Linked List
In circular, last node contains a pointer to the first node.

We can have a circular linked list as well as doubly linked list.

## Doubly Linked List
Doubly linked list or two-way linked list is a linked list data structure with two link, one that conatint reference to the next data adn one that containt reference to the previous data.

Operation:
Push head, push mid, push tail.
Pop head, pop mid, pop tail.

**Refer to repo for the full code**

# Stack and Queue (Session 5 & 6)
## Stack
Stack is a collection data structure which has two fundamental operation: push and pop

The data are stored in **Last In Firts Out(LIFO)** order

Stack can be implemented using array or linked list

Stack Operation
1. push
2. pop
3. top

### Array Representation
Stack has two variable:
1. Top, which is used to store the address of the topmost element of the stack
2. Max, which is used to store the maximum number of elements that the stack can hold

### Linked List Repesentation
In a linked stack, every node has two part:
1. One that store data
2. One that store address of the next node

The START pointer of the linked list is used as TOP
All insertions and deletions are done at the node pointed by the TOP

# Hashing & Hashtable (Session 7)
Hashing is a technique used for storing and retrieving keys in a rapid manner

In hashing, a string of characters are transformed into usually shorter length value or key thhat represents the original string

Hashing is used to index and retrieve items in a database because it is faster to find them using shorter hashed key than to find it using the original value

Hashing can also be defined as a concept of distributing keys in an array called a **hash table** using a predetermined function called **hash function**.

## Hashtable
Hash table is a table (array) where we store the original string. Index of the table is the hashed key while the value is the original string

The size of hash table is usually several orders of magnitude lower than the total number of possible string, so several string might have a same key.

For example, there are 26^7 string of length 7 characters consists of lowercase only.

## Hashfunction
There are many way to hash a string into a key. The following are some important methods for constructing hash functions.
1. Mid-square
2. Division (most common)
3. Folding
4. Digit Extraction
5. Rotating Hash

## Collision
When strings have the same hash-key, collisions happen

There are two ways to handle collisions:
1. Linear Probing
Search the next empty slot and put the string there

2. Chaining
Put the string in a slot as a chanined list (linked list)

# Trees & Binary Tree (Session 8)

# Binary Search Tree (Session 9)

# Kisi-Kisi Mid Semester
1. Binary Search Tree (Snippet code)
2. Hash table (Snippet code)
3. Priority queue - double linked list (Full code)
4. Konversi infix, postfix, prefix

