// Introduction to Queue using Arrays
#include <iostream>
using namespace std;

#define SIZE 5  // Size of the queue

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is full
    bool isFull() {
        return (rear == SIZE - 1);
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Insert element into queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is FULL! Cannot insert " << value << endl;
        } else {
            if (front == -1) front = 0; // first insertion
            arr[++rear] = value;
            cout << value << " enqueued." << endl;
        }
    }

    // Remove element from queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is EMPTY! Cannot dequeue." << endl;
        } else {
            cout << arr[front] << " dequeued." << endl;
            front++;
        }
    }

    // Peek front element
    void peek() {
        if (!isEmpty()) {
            cout << "Front element: " << arr[front] << endl;
        } else {
            cout << "Queue is EMPTY!" << endl;
        }
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is EMPTY!" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

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

