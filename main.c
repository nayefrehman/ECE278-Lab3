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
    Struct Node * current = head; // creates a current pointer and assigns it to whatever the head is pointing to 
    while(current != NULL){
        printf("%d -> ", current -> val); // prints the value of the current node
        current = current -> next; // makes the current pointer point to the next node 
    }
}


// Function to reverse a singly linked list
// 1 Mark
struct Node* reverseList(struct Node* head) {

}

// Function to find the middle value of the list
// 1 Mark
void findMidpoint(struct Node* head){

}

// Functions to retrieve n elements from either end of the list and print them out
// 1 Mark - 0.5 Marks each
void returnElementsFront(struct Node* head, int n){

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

    // Reverse the list
    head = reverseList(head);
    printf("Reversed list: ");
    printList(head);

    // Find Midpoint
    printf("Midpoint Value: ");
    findMidpoint(head);


    // Retrieve Elements
    int n = 2;
    printf("n Front Values: ");
    returnElementsFront(head, n);

    printf("n Back Values: ");
    returnElementsBack(head, n);

    // Delete Duplicates
    printf("Delete Duplicates: ");
    head = deleteDuplicates(head);
    printList(head);


    return 0;
}