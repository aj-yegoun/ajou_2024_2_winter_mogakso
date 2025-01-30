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

    int n , m; cin >> n >> m;
    vector<string> str(n), check(m);
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }
    for(int i = 0; i < m; i++){
        cin >> check[i];
    }

    return 0;
}
