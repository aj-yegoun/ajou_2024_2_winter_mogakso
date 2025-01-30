#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO;

    int t;
    cin >> t;
    stack<int> myStack;

    while (t--) {
        string command;
        cin >> command;

        if (command == "push") {
            int x;
            cin >> x;
            myStack.push(x);
        } 
        else if (command == "pop") {
            if (myStack.empty()) {
                cout << -1 << '\n';
            } else {
                cout << myStack.top() << '\n';
                myStack.pop();
            }
        } 
        else if (command == "size") {
            cout << myStack.size() << '\n';
        } 
        else if (command == "empty") {
            cout << (myStack.empty() ? 1 : 0) << '\n';
        } 
        else if (command == "top") {
            if (myStack.empty()) {
                cout << -1 << '\n';
            } else {
                cout << myStack.top() << '\n';
            }
        }
    }

    return 0;
}
