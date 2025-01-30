#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO;

    int n; cin >> n;
    vector<pair<int,int>> coordinates(n);
    for(int i = 0; i < n; i++){
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    sort(coordinates.begin(), coordinates.end());

    for(int i = 0; i < n; i++){
        cout << coordinates[i].first << ' ' << coordinates[i].second << '\n';
    }
    return 0;
}
