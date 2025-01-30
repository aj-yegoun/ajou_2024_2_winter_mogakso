#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <cctype>
#include <vector>
#include <iterator>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<vector<int>> graph;
vector<bool> dfs_visited, bfs_visited;
vector<int> dfs_result, bfs_result;

void dfs(int now) {
    dfs_visited[now] = true;
    dfs_result.push_back(now);

    for (auto next : graph[now]) {
        if (!dfs_visited[next]) {
            dfs(next);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    bfs_visited[start] = true;

    while (!q.empty()) {
        int now = q.front();
        q.pop();
        bfs_result.push_back(now);

        for (auto next : graph[now]) {
            if (!bfs_visited[next]) {
                bfs_visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    FASTIO;

    int n, m, v;
    cin >> n >> m >> v;

    graph.resize(n + 1);
    dfs_visited.resize(n + 1, false);
    bfs_visited.resize(n + 1, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v);
    bfs(v);

    for (auto x : dfs_result) {
        cout << x << ' ';
    }
    cout << '\n';

    for (auto x : bfs_result) {
        cout << x << ' ';
    }

    return 0;
}