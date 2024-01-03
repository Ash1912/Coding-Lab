// Write a program to swap pair of elements of an array of n integers from starting. If n is odd, then last number will be remain unchanged.

#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = this->next;
        this->next = newNode;
    }

    void print() {
        Node* temp = this;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void swapPair() {
        Node* temp = this;
        while (temp != NULL && temp->next != NULL) {
            swap(&temp->data, &temp->next->data);
            temp = temp->next->next;
        }
    }
};

int main() {
    int n, a;

    printf("Enter the Size of the Linked List: ");
    scanf("%d", &n);

    Node* head = new Node(rand() % 100);
    Node* temp = head;

    for (int i = 0; i < n; i++) {
        a = rand() % 100;
        temp->push(a);
        temp = temp->next;
    }

    printf("Linked list before : ");
    head->print();

    head->swapPair();

    printf("Linked list after : ");
    head->print();

    return 0;
}
