#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

vector<vector<int>> board(5, vector<int>(5,0));
int answer = 0;
bool visited[10101010];

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};

void dfs(int x, int y, int sum, int cnt){
    if(cnt == 5){
        if(!visited[sum]){
            visited[sum] = true;
            answer++;
        }
        return;
    }

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

       if(nx >= 0 && nx < 5 && ny >= 0 && ny < 5){
            dfs(nx, ny, sum*10 + board[nx][ny], cnt+1);
        }
    }    
}

int main() {
    FASTIO;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> board[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0;  j < 5; j++){
            dfs(i, j, board[i][j], 0);
        }
    }

    cout << answer << '\n';

    return 0;
}
