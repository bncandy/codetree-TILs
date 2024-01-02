#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> dynamicArray;

    while (N--) {
        string command;
        cin >> command;

        if (command == "push_back") {
            int value;
            cin >> value;
            dynamicArray.push_back(value);
        } else if (command == "pop_back") {
            if (!dynamicArray.empty()) {
                dynamicArray.pop_back();
            }
        } else if (command == "size") {
            cout << dynamicArray.size() << endl;
        } else if (command == "get") {
            int k;
            cin >> k;
            if (k >= 1 && k <= dynamicArray.size()) {
                cout << dynamicArray[k - 1] << endl;
            }
        }
    }

    return 0;
}