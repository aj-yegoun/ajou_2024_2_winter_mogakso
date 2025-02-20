#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#include <iterator>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main() {
    FASTIO;
    
    int n, m; cin >> n >> m;
    ll temp = 0, max = 0, prev = 0;
    for(int i = 0; i < m; i++) {
        cin >> temp;

        if(i == 0){
            max = (max > temp - prev) ? max : temp-prev; 
        }
        else{
            max = (max > ceil((double)(temp - prev)/2)) ? max : ceil((double)(temp-prev)/2); 
        }

        prev = temp;
    }

    max = (max > n - prev) ? max : n-prev; 
    cout << max;

    return 0;
}
