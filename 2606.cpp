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

vector<int> graph[101010];
int virus[101010];
int visited[101010];

int cnt = 0;

void dfs(int start){
    for(int i = 0; i < graph[start].size(); i++){
        int x = graph[start][i];
        if(virus[x] == 0){
            virus[x] = 1;
            cnt++;
            dfs(x);
        }
    }
}

int main() {
    FASTIO;

    int n; cin >> n;
    int t; cin >> t;
    while(t--){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    virus[1] = 1;
    dfs(1);

    cout << cnt << '\n';

    return 0;
}
