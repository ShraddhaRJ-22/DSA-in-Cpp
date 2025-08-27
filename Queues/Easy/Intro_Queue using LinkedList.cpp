// Introduction to Queue using Linked Lists
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Queue class using Linked List
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == nullptr);
    }

    // Insert element into queue
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (rear == nullptr) { // First element
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " enqueued." << endl;
    }

    // Remove element from queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is EMPTY! Cannot dequeue." << endl;
            return;
        }

        Node* temp = front;
        cout << front->data << " dequeued." << endl;

        front = front->next;
        if (front == nullptr) { // If queue becomes empty
            rear = nullptr;
        }

        delete temp;
    }

    // Peek front element
    void peek() {
        if (!isEmpty()) {
            cout << "Front element: " << front->data << endl;
        } else {
            cout << "Queue is EMPTY!" << endl;
        }
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is EMPTY!" << endl;
            return;
        }

        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.peek();
    q.display();

    return 0;
}

