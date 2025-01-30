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

int n, m, r;
vector<int> graph[10101010];
int visited[10101010];
int cnt = 1;

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = cnt++;
    
    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(auto next : graph[now]){
            if(!visited[next]){
                visited[next] = cnt++;
                q.push(next);
            }
        }
    }
}

int main() {
    FASTIO;

    cin >> n >> m >> r;
    for(int i = 0 ; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        sort(graph[i].rbegin(), graph[i].rend());
    }

    bfs(r);

    for(int i = 1; i <= n; i++){
        cout << visited[i] << '\n';
    }
    return 0;
}
