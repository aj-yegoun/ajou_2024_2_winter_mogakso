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

    int n, k;
    cin >> n >> k;
    vector<int> coin;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x <= k){
            coin.push_back(x);
        }
        else{
            break;
        }
    }

    int result = 0;
    for(int i = coin.size()-1; i >= 0; i--){
        if(k == 0) break;
        else{
            int temp = k/coin[i];
            result += temp;
            k -= temp*coin[i];
        }
    }

    cout << result << '\n';
    return 0;
}
