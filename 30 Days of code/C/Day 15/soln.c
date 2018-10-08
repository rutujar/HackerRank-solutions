#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head, int data) {
    //Complete this function

    // When out list is empty create head node
    if(head == NULL) {
        head = malloc(sizeof(Node));

        head->data = data;
        head->next = NULL;

        return head;
    }

    Node* temp = head;
    while(temp->next) temp = temp->next;

    temp->next = malloc(sizeof(Node));
    temp = temp->next;

    temp->data = data;

    return head;
}

void display(Node *head) {
	Node *start = head;
	while(start) {
		printf("%d ", start->data);
		start = start->next;
	}
}

int main() {
	int T,data;
    scanf("%d", &T);
    Node *head = NULL;	
    while(T-->0) {
        scanf("%d", &data);
        head = insert(head, data);
    }
    display(head);	
}
