#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int n, m, r;
vector<int> graph[1010101];
int visited[1010101];
int cnt = 1;

void dfs(int now) {
    visited[now] = cnt++;

    for (auto next : graph[now]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    FASTIO;

    cin >> n >> m >> r;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].rbegin(), graph[i].rend());
    }

    dfs(r);

    for (int i = 1; i <= n; i++) {
        cout << visited[i] << '\n';
    }

    return 0;
}
