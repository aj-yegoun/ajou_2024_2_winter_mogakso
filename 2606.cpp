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

void dfs(int start){
    visited[start] = 1;
    for(int i = 0; i < graph[start].size(); i++){
        int index = graph[start][i];
        if(visited[index] == 0){
            dfs(index);
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
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << '\n';

    return 0;
}
