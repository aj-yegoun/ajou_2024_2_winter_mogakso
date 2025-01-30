#include <iostream>
#include <algorithm>
#include <map>
#include <set>
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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> result(101010, 0);
        result[1] = 1, result[2] = 1, result[3] = 1;
        for (int i = 4; i <= n; i++){
            result[i] = result[i - 2] + result[i - 3];
        }
        cout << result[n] << '\n';
    }
    
    return 0;
}
