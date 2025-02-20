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
#define MOD 15746

vector<ll> result(10101010);

int main() {
    FASTIO;

    int n;
    cin >> n;
    
    result[1] = 1, result[2] = 2;
    for (int i = 3; i <= n; i++){
        result[i] = (result[i - 1] + result[i - 2]) % MOD;
    }

    cout << result[n] << '\n';

    return 0;
}
