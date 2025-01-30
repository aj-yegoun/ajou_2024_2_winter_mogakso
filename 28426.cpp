#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
using namespace std;

int main() {
    FASTIO;

    int n; cin >> n;
    ll sum = 0;
    if(n == 2){
        cout << 3 << ' ' << 9;
        return 0;
    }
    for(int i = 1; i <= n-1; i++){
        sum += 2*i;
        cout << 2*i << ' ';
    }
    ll result = 3;
    while(1){
        if((sum+result)%result == 0){
            cout << result;
            return 0;
        }
        result += 2;
    }

    return 0;
}
