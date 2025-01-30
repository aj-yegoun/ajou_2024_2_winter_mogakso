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

    int n;
    cin >> n;
    vector<int> stair(101010);
    for (int i = 1; i <= n; i++){
        cin >> stair[i];
    }
    vector<int> result(101010);
    result[1] = stair[1];
    result[2] = stair[1] + stair[2];
    result[3] = stair[3] + max(stair[1], stair[2]);
    for (int i = 4; i <= n; i++) {
        result[i] = stair[i] + max((result[i - 3] + stair[i - 1]), result[i - 2]);
    }
    cout << result[n];

    return 0;
}
