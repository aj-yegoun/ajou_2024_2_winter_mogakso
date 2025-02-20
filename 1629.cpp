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

long long divide(ll a, ll b, ll c){
    if(b == 0){
        return 1;
    }

    ll half = divide(a, b/2, c);
    ll half_modulo = (half*half) % c;

    if(b%2 == 0){
        return half_modulo;
    }
    else{
        return (half_modulo*a) % c;
    }
}

int main() {
    FASTIO;
 
    ll a, b, c;
    cin >> a >> b >> c;
    cout << divide(a,b,c) << '\n';

    return 0;
}
