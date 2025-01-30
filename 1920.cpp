#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int sorting(vector<int>& a, int n, int x){
    int left = 0, right = n-1, mid;
    while(left <= right){
        mid = (left + right)/2;

        if(x == a[mid]){
            return 1;
        }
        else if(x < a[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return 0;
}

int main() {
    FASTIO;

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        if(sorting(a, n, x) == 1){
            cout << 1 << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }

    return 0;
}
