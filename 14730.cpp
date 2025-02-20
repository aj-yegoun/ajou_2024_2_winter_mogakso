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
    ll sum = 0;
    while(t--){
        ll a, b;
        cin >> a >> b;
        sum += a*b;
    }
    cout << sum << '\n';
    
    return 0;
}
