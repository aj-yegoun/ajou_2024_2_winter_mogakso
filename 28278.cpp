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
    stack<int> s;
    while(n--){
        int x; cin >> x;
        if(x == 1){
            int a; cin >> a;
            s.push(a);
        }
        else if(x == 2){
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n';
                s.pop(); 
            }
        }
        else if(x == 3){
            cout << s.size() << '\n';
        }
        else if(x == 4){   
            if(s.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(x == 5){   
            if(s.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << s.top() << '\n'; 
            }
        }
    }
    return 0;
}
