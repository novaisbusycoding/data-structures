#include <stdlib.h>
#include <stdbool.h>

// * Types *
typedef struct Node {
    int data;
    struct Node* next;
} Node;
typedef struct LinkedList {
    Node* head;
} LinkedList;
// **

// * Functions *
LinkedList* createList();
bool isEmpty(LinkedList* list);
void insertAtBeginning(LinkedList* list, int data);
void printList(LinkedList* list);
// **

// ----------------------------------------------------- //

LinkedList* createList() {
    LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));
    if (list != NULL) {
        list->head = NULL;
    }
    return list;
}

void insertAtBeginning(LinkedList* list, int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->data = data;
        newNode->next = list->head;
        list->head = newNode;
    }
}

void printList(LinkedList* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

bool isEmpty(LinkedList* list){
    return list->head == NULL;
}
