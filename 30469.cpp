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

    char a[10], b[10];
    int n;
    cin >> a >> b >> n;

    if(b[0] == '2' || b[0] == '4' || b[0] == '6' || b[0] == '8' || b[0] == '5'){
        cout << -1 << '\n';
        return 0;
    }    
    // 1 3 5 7 9
    cout << a;
    if(a[1] == '1' || a[1] == '5'){
        cout << 3;
        for(int i = 0; i < n-5; i++){
            cout << 1;
        }
    }
    else if(a[1] == '9'){
        cout << 7;
        for(int i = 0; i < n-5; i++){
            cout << 1;
        }
    }
    else{
        for(int i = 0; i < n-4; i++){
            cout << 1;
        }
    }
    cout << b;
    return 0;
}
