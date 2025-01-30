#include <iostream>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

bool check(pair<long long , long long> a, pair<long long , long long> b, pair<long long , long long> c) {
    long long len1 = (b.first - a.first) * (b.first - a.first) + (b.second - a.second) * (b.second - a.second);
    long long len2 = (c.first - a.first) * (c.first - a.first) + (c.second - a.second) * (c.second - a.second);
    long long len3 = (b.first - c.first) * (b.first - c.first) + (b.second - c.second) * (b.second - c.second);

    bool good = false;
    if(len1 + len2 == len3 || len1 + len3 == len2 || len3 + len2 == len1) good = true;

    return good;
}

int main() {
    FASTIO;

    int n;
    cin >> n;
    vector<pair<long long , long long>> coordinates(n);

    for (int i = 0; i < n; i++) {
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (check(coordinates[i], coordinates[j], coordinates[k])) {
                    ans++;
                }
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
