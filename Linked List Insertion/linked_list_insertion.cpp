// Linked list implementation in C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef struct Node {
    int data;
    Node* next;
} Node;

// Function Prototypes
Node* Create(int value);
Node* InsertAtBeginning(Node* head, int value);
Node* InsertAtPosition(Node* head, int value, int position);
Node* InsertAtEnd(Node* head, int value);
void Traverse(Node* head);

int main(void) {
    Node* head = new Node;
    head = Create(24);

    head = InsertAtBeginning(head, 33);
    Traverse(head);
    cout << endl;

    head = InsertAtPosition(head, 22, 2);
    Traverse(head);

    // head = InsertAtEnd(head, 1000);
    return 0;
}

void Traverse(Node* head) {
    // Prints all the elements of a singly linked list
    Node* ptr = new Node;
    ptr = head;
    cout << "The linked list: ";
    while (ptr != NULL) {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}

Node* Create(int value) {
    // Creating the head node of a singly linked list
    Node* ptr = new Node;
    ptr->data = value;
    ptr->next = NULL;
    return ptr;
}

Node* InsertAtBeginning(Node* head, int value) {
    // Inserting a new node at the beginning of a singly linked list
    Node* ptr = new Node;
    ptr->data = value;
    ptr->next = head;
    head = ptr;
    return head;
}

Node* InsertAtPosition(Node* head, int value, int position) {
    // Inserting a new node at a specified position in a singly linked list
    if (position < 1) {
        cout << "The specified position is invalid. Enter a valid position.";
        return head;
    }

    if (position == 1)
        return InsertAtBeginning(head, value);

    Node* ptr = head;

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (position == 2) {
        newNode->next = ptr->next;
        ptr->next = newNode;
        return head;
    }

    while (position > 3 && ptr->next != NULL) {
        ptr = ptr->next;
        position--;
    }

    newNode->next = ptr->next;
    ptr->next = newNode;

    return head;
}


Node* InsertAtEnd(Node* head, int value) {
    // Inserting a new node at the end of a singly linked list
    Node* ptr = new Node;
    ptr = head;

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    ptr->next = newNode;

    return head;
}
