#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next, *prev;

    Node(int value) {
        this->data = value;
        this->next = this->prev = NULL;
    }
};

class Deque {
    Node *front, *rear;

public:
    Deque() {
        front = rear = NULL;
    }

    // push_front
    void push_front(int x) {
        Node *temp = new Node(x);
        if (front == NULL) {
            front = rear = temp;
        } else {
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
    }

    // push_back
    void push_back(int x) {
        Node *temp = new Node(x);
        if (rear == NULL) {
            front = rear = temp;
        } else {
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
        }
    }

    // pop_front
    int pop_front() {
        if (front == NULL) return -1;
        int val = front->data;
        Node *temp = front;
        front = front->next;
        if (front) front->prev = NULL;
        else rear = NULL; // if deque became empty
        delete temp;
        return val;
    }

    // pop_back
    int pop_back() {
        if (rear == NULL) return -1;
        int val = rear->data;
        Node *temp = rear;
        rear = rear->prev;
        if (rear) rear->next = NULL;
        else front = NULL; // if deque became empty
        delete temp;
        return val;
    }

    // get front element
    int start() {
        if (front == NULL) return -1;
        return front->data;
    }

    // get rear element
    int end() {
        if (rear == NULL) return -1;
        return rear->data;
    }
};

int main() {
    Deque dq;
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << "Front: " << dq.start() << endl; // 5
    cout << "Rear: " << dq.end() << endl;   // 20

    cout << "Popped front: " << dq.pop_front() << endl; // 5
    cout << "Popped back: " << dq.pop_back() << endl;   // 20

    cout << "Front: " << dq.start() << endl; // 10
    cout << "Rear: " << dq.end() << endl;   // 10
}

