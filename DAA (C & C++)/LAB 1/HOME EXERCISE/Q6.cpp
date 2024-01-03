// Write a program to find out the second smallest and second largest element stored in an array of n integers. n is the user input. The array takes input through random number generation within a given range. How many different ways you can solve this problem. Write your approaches & strategy for solving this problem.

#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        data = 0;
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    void push(int data) {
        Node *newNode = new Node(data);
        newNode->next = this->next;
        this->next = newNode;
    }

    void print() {
        Node *temp = this;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int length() {
        int count = 0;
        Node *temp = this;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    int get2largest() {
        Node *temp = this;
        int largest = INT_MIN, secondlargest = INT_MIN;
        while (temp != NULL) {
            if (temp->data > largest) {
                secondlargest = largest;
                largest = temp->data;
            } else if (temp->data > secondlargest) {
                secondlargest = temp->data;
            }
            temp = temp->next;
        }
        return secondlargest;
    }

    int get2smallest() {
        Node *temp = this;
        int smallest = INT_MAX, secondsmallest = INT_MAX;
        while (temp != NULL) {
            if (temp->data < smallest) {
                secondsmallest = smallest;
                smallest = temp->data;
            } else if (temp->data < secondsmallest) {
                secondsmallest = temp->data;
            }
            temp = temp->next;
        }
        return secondsmallest;
    }

    void print(Node *temp) {
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int n, a;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    Node *head = new Node(rand() % 100);
    Node *temp = head;
    for (int i = 0; i < n; i++) {
        a = rand() % 100;
        temp->push(a);
        temp = temp->next;
    }

    cout << "The array is: ";
    head->print();

    cout << "The second largest element in the array is: " << head->get2largest() << endl;
    cout << "The second smallest element in the array is: " << head->get2smallest() << endl;

    return 0;
}