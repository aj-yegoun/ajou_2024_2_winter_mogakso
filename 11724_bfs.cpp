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

int visited[10101010];
vector<int> graph[10101010];

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while(q.size() != 0){
        int current = q.front(); // start가 아닌 가장 앞의 값에 인근 정점 push
        q.pop();
        for(int i = 0;  i < graph[current].size(); i++){
            if(visited[graph[current][i]] == 0){
                visited[graph[current][i]] == 1;
                q.push(graph[current][i]);
            }
        }
    }
}

int main() {
    FASTIO;
    
    int n, m;
    cin >> n >> m; 
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i] == 0){
            bfs(i);
            cnt++;
            
        }
    }

    cout << cnt << '\n';

    return 0;
}
