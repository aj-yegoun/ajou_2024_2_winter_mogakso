#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#include <iterator>
#define ll long long
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO;

    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    ll low = 0;
    ll high = arr[n-1];
    ll result = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        long long total = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) {
                total += arr[i] - mid;
            }
        }

        if (total >= m) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << result << '\n';
    
    return 0;
}
