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
    deque<int> d;
    while(n--){
        int x; cin >> x;
        if(x == 1){
            int a; cin >> a;
            d.push_front(a);
        }
        else if(x == 2){
            int a; cin >> a;
            d.push_back(a);
        }
        else if(x == 3){
            if(d.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if(x == 4){
            if(d.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << d.back() << '\n';
                d.pop_back();
            }            
        }
        else if(x == 5){
            cout << d.size() << '\n';
        }
        else if(x == 6){
            if(d.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(x == 7){
            if(d.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << d.front() << '\n';
            }            
        }
        else if(x == 8){
            if(d.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << d.back() << '\n';
            }                    
        }
    }
    return 0;
}
