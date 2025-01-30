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

/*
n = 1 -> 1
n = 2 -> 11 || 00
n = 3 -> 111 || 000 || 100
n = 4 -> 1111 || 0000 || 1100 || 0011 || 1001
n = 5 -> 11111 || 11100 || 10000 || 00001 || 00100 || 00111
*/

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
