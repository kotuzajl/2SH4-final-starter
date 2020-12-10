/* Question 1
 [C Programming]
 [30 Marks]
In this question, you are required to implement a linked list in C
The question has four parts, answer all of them in this same file*/
#include<stdio.h> 
#include<stdlib.h>
/*(a) [5 Marks] write structure Node that holds an integer value as well as a pointer to the next node*/
//Answer:
typedef struct {
 unsigned int var1;
 char* var2;
} node; 








/*(b) [5 Marks] Write structure SLL that represents the singly linked list and holds a pointer to the first node in the list.*/
//Answer:
struct Node 
{ 
    int key; 
    struct Node* next; 
};







/*(c) [10 Marks] write function searchList, that takes as input two parameters: the head of a linked list "head" and the integer value to search for "target" and 
returns:
1 if the target was found in the list
0, otherwise*/
//Answer:
//helper function to help create list
void push(struct Node** head_ref, int new_key) 
{ 
    //memory allocation
    struct Node* new_node = 
            (struct Node*) malloc(sizeof(struct Node)); 
  
    //key insertion
    new_node->key  = new_key; 

    new_node->next = (*head_ref); 
  
    (*head_ref)    = new_node; 
} 
int search(struct Node* head, int target) 
{ 
    struct Node* current = head;  // Initialize current 
    while (current != NULL) 
    { 
        if (current->key == target) 
            return 1; 
        current = current->next; 
    } 
    return 0; 
} 


  
/*(d) [10 Marks] test your function in main by creating a list of 10 nodes and then call the searchList function to search for a certain value, make sure you check 
the correctness of the returned value from the function by comparing it against what you expect. */
//Answer:


int main(){
	
	
	struct Node* head = NULL; 
    int target = 21; 
  
    push(&head, 10); 
    push(&head, 30); 
    push(&head, 11); 
    push(&head, 21); 
    push(&head, 1); 
    push(&head, 4);
    push(&head, 12);
    push(&head, 5);
    push(&head, 44);
    push(&head, 0);
  
    search(head, 21); 
    return 0; 
} 
