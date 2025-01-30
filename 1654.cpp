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

    ll k, n; cin >> k >> n;
    vector<ll> lan(k);
    ll max = -1;
    for(int i = 0; i < k; i++){
        cin >> lan[i];
        if(lan[i] > max){
            max = lan[i];
        }
    }

    ll low = 1, high = max, mid;
    ll ans = 0;
    while(low <= high){
        mid = (low+high)/2;
        ll cnt = 0;
        for(int i = 0; i < k; i++){
            cnt += lan[i] / mid;
        }


        if(cnt >= n){
            low = mid + 1;
            ans = mid;     
        }
        else{
            high = mid - 1;
        }
    }

    cout << ans << '\n';


    return 0;
}
