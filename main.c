#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a singly linked list node
struct Node {
    int val;
    struct Node* next;
};

// Function to create a new node
// 0.5 Marks
void push(struct Node** head, int new_val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // allocates memory for the new Node
    newNode->val = new_val; // assigns the value to the newNode's val
    newNode->next = *head; // makes the next of the newNode to where head is pointing to 
    *head = newNode; // makes the head point to the newNode
}

// Function to print the singly linked list
// 0.5 Marks
void printList(struct Node* head) {
    struct Node * current = head; // creates a current pointer and assigns it to whatever the head is pointing to 
    while(current != NULL){
        printf("%d -> ", current -> val); // prints the value of the current node
        current = current -> next; // makes the current pointer point to the next node 
    }
}


// Function to reverse a singly linked list
// 1 Mark
struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL; // creates a previous pointer and setting it to NULL
    struct Node* current = head; // creates a current pointer and assigns it to whatever the head is pointing to
    struct Node* next = NULL; // creates a next pointer and setting it to NULL

    while(current != NULL){
        next = current -> next; // this sets the next pointer to the node after the current node
        current -> next = prev; // this sets the first node to point to NULL
        prev = current; // now previous points to what current is pointing to
        current = next; // now current points to what next is pointing to
    }
    return prev;
}

// Function to find the middle value of the list
// 1 Mark
void findMidpoint(struct Node* head){
    struct Node * traverse = head; 
    int count = 0;

    if(traverse == NULL){
        printf("List is empty\n");
        return;
    }

    // Count nodes
    while(traverse != NULL){
        count++; 
        traverse = traverse->next; 
    }

    int targetIndex = count / 2;  // works for both odd and even

    // Traverse again to reach that index
    traverse = head; 
    for(int i = 0; i < targetIndex; i++){
        traverse = traverse->next; 
    }

    printf("%d\n", traverse->val);

}

// Functions to retrieve n elements from either end of the list and print them out
// 1 Mark - 0.5 Marks each
void returnElementsFront(struct Node* head, int n){
    struct Node* traverse = head; // set traverse pointer to head
    int count = 0; // counter to keep track of how many elements to print until n is reached 

    while(traverse != NULL && count < n){
        printf("%d ", traverse -> val);
        traverse = traverse -> next;
        count++;
    }

}

void returnElementsBack(struct Node* head, int n){
    
}

//Function to delete duplicate values in a list - assume only consecutive duplicates
// 1 Mark
struct Node* deleteDuplicates(struct Node* head){

}



// Test cases
int main() {

    printf("Test case 1.\n");

    // Create a singly linked list: 5 -> 10 -> 15 -> 20
    // Start with an empty list
    struct Node* head = NULL;

    // Use the push function to add elements to the list
    int arr[4] = {20, 10, 10, 5};
    for (int i = 0; i < 4; i++) {
        push(&head, arr[i]);
    }

    // Print the original list
    printf("Original list: ");
    printList(head);
    printf("\n");

    // Reverse the list
    head = reverseList(head);
    printf("Reversed list: ");
    printList(head);
    printf("\n");

    // Find Midpoint
    printf("Midpoint Value: ");
    findMidpoint(head);
    printf("\n");

    // Retrieve Elements
    int n = 2;
    printf("n Front Values: ");
    returnElementsFront(head, n);
    printf("\n");

    printf("n Back Values: ");
    returnElementsBack(head, n);
    printf("\n");

    // Delete Duplicates
    printf("Delete Duplicates: ");
    head = deleteDuplicates(head);
    printList(head);


    return 0;
}