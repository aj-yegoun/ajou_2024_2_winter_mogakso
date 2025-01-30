#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO;

    int n, m; cin >> n >> m;
    vector<vector<int>> num(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> num[i][j];
        }
    }

    int k; cin >> k;
    while (k--)
    {
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        i--; j--; x--; y--;
        long long sum = 0;
        for(int q = i; q <= x; q++){
            for(int w = j; w <= y; w++){
                sum += num[q][w];
            }
        }
        cout << sum << '\n';
    }
    

    return 0;
}
