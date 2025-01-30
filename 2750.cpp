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

    int n; cin >> n;
    vector<int> num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    for(int i = 0; i < n; i++){
        cout << num[i] << '\n';
    }

    return 0;
}
