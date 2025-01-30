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

    ll n, k; cin >> n>> k;
    vector<ll> mak(n);
    ll temp = -1;
    for(int i = 0; i <n; i++){
        cin >> mak[i];
        if(mak[i] > temp){
            temp = mak[i];
        }
    }
    
    ll left = 1, right = temp, mid;
    ll max = -1;
    while (left <= right)
    {
        mid = (left + right) / 2;

        ll cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += (mak[i]/mid);
        }

        if(cnt >= k){
            max = mid;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    cout << max << '\n';
    
    return 0;
}
