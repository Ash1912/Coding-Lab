// Write a program to display an array of n integers (n>1), where at every index of the array should contain the 
// product of all elements in the array except the element at the given index. Solve this problem by taking single loop
//  and without an additional array.
// Input Array : 3 4 5 1 2
// Output Array :40 30 24 120 60

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
        Node *temp = this;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void print() {
        Node *temp = this;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int dataAt(int index) {
        Node *temp = this;
        int count = 0;
        while (temp != NULL) {
            if (count == index) {
                return temp->data;
            }
            temp = temp->next;
            count++;
        }
        return -1;
    }

    void setDataAt(int index, int data) {
        Node *temp = this;
        int count = 0;
        while (temp != NULL) {
            if (count == index) {
                temp->data = data;
                return;
            }
            temp = temp->next;
            count++;
        }
    }

    int findProduct(Node *head, int n, int left, int i) {
        if (i == n) {
            return 1;
        }
        int curr = head->dataAt(i);
        int right = findProduct(head, n, left * head->dataAt(i), i + 1);
        setDataAt(i, left * right);
        return curr * right;
    }
};

int main() {
    clock_t start, end;
    int n;
    start = clock();
    cout << "Input elements in the array: ";
    // cin >> n;
    n = 5;

    Node *head = new Node(3);

    head->push(4);
    head->push(5);
    head->push(1);
    head->push(2);
    head->print();

    head->findProduct(head, n, 1, 0);
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Output elements in the array: ";
    head->print();
    cout << "Time taken by the program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    cout << "Roll Number : 20051685" << endl; 
    cout << "Batch - CSE6" << endl;
    cout << "Name - Ashish Kumar Mishra" << endl;
    return 0;
}