#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

    node* head = NULL;
    node* tail = NULL;

    void insertLast(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = head; 
    } else {
        tail -> next = newnode;
        tail = newnode;
    }
}
