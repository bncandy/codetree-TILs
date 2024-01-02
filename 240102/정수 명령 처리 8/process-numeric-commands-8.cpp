#include <iostream>
#include <list>

using namespace std;

int main() {
    int N;
    cin >> N;

    list<int> linkedList;

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
            if (!linkedList.empty()) {
                cout << linkedList.front() << endl;
                linkedList.pop_front();
            }
        } else if (command == "pop_back") {
            if (!linkedList.empty()) {
                cout << linkedList.back() << endl;
                linkedList.pop_back();
            }
        } else if (command == "size") {
            cout << linkedList.size() << endl;
        } else if (command == "empty") {
            cout << linkedList.empty() << endl;
        } else if (command == "front") {
            if (!linkedList.empty()) {
                cout << linkedList.front() << endl;
            }
        } else if (command == "back") {
            if (!linkedList.empty()) {
                cout << linkedList.back() << endl;
            }
        }
    }

    return 0;
}