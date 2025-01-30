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

    string fake;
    ll k;
    cin >> fake >> k;

    int length = fake.length();
    vector<char> pw;
    for(int i = length-1; i >= 0; i--){
        if(fake[i] == '1' || fake[i] == '2' || fake[i] == '6' || fake[i] == '7'){
            pw.push_back(i);
        }
    }

    int n = pw.size(); // 예외 처리
    long long total = (1LL << n);
    if (k > total) {
        cout << -1 << '\n';
        return 0;
    }

    k--;
    string result = fake;
    for (int i = 0; i < n; i++) {
        int pos = pw[i];
        if (result[pos] == '6') result[pos] = '1';
        if (result[pos] == '7') result[pos] = '2';
        if (k & (1LL << i)) {
            if (result[pos] == '1') result[pos] = '6';
            else if (result[pos] == '2') result[pos] = '7';
        }
    }

    cout << result << '\n';

    return 0;
}