#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {}

    void push_front(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void push_back(int value) {
        Node* newNode = new Node(value);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    int pop_front() {
        if (!head) {
            cout << "empty" << endl;
            return -1;
        }

        int frontValue = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;

        return frontValue;
    }

    int pop_back() {
        if (!head) {
            cout << "empty" << endl;
            return -1;
        }

        int backValue;
        if (head == tail) {
            backValue = head->data;
            delete head;
            head = tail = nullptr;
        } else {
            Node* current = head;
            while (current->next != tail) {
                current = current->next;
            }
            backValue = tail->data;
            delete tail;
            tail = current;
            tail->next = nullptr;
        }

        size--;

        return backValue;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    int getFront() {
        if (!head) {
            cout << "empty" << endl;
            return -1;  
        }
        return head->data;
    }

    int getBack() {
        if (!tail) {
            cout << "empty" << endl;
            return -1; 
        }
        return tail->data;
    }
};

int main() {
    int N;
    cin >> N;

    LinkedList linkedList;

    while (N--) {
        string command;
        cin >> command;

        if (command == "push_front") {
            int value;
            cin >> value;
            linkedList.push_front(value);
        } else if (command == "push_back") {
            int value;
            cin >> value;
            linkedList.push_back(value);
        } else if (command == "pop_front") {
            cout << linkedList.pop_front() << endl;
        } else if (command == "pop_back") {
            cout << linkedList.pop_back() << endl;
        } else if (command == "size") {
            cout << linkedList.getSize() << endl;
        } else if (command == "empty") {
            cout << linkedList.isEmpty() << endl;
        } else if (command == "front") {
            cout << linkedList.getFront() << endl;
        } else if (command == "back") {
            cout << linkedList.getBack() << endl;
        }
    }

    return 0;
}