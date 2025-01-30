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

int n, m;
vector<vector<int>> maze(n, vector<int>(m));

void bfs(int start){
    queue<int> q;
    q.push(start);

}

int main() {
    FASTIO;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> maze[i][j];
        }
    }



    return 0;
}
