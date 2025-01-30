#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#include <iterator>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO;

    int n; cin >> n;
    queue<int> q;
    while(n--){
        string x; cin >> x;
        if(x == "push"){
            int a; cin >> a;
            q.push(a);
        }
        else if(x == "pop"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(x == "size"){
            cout << q.size() << '\n';
        }
        else if(x == "empty"){
            if(q.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }            
        }
        else if(x == "front"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.front() << '\n';
            }            
        }
        else if(x == "back"){
            if(q.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << q.back() << '\n';
            }            
        }
    }

    return 0;
}
