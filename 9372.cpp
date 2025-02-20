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


    int t;
    cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> graph[101010];
        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        cout << n-1 << '\n';
    }
    return 0;
}
