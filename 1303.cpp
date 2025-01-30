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

int n, m, w = 0, b = 0;
vector<vector<char>> battlefield(100, vector<char>(100));
vector<vector<bool>> visit(100, vector<bool>(100));
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int temp; // 현재 병사 그룹 크기

void dfs(int x, int y, char color) {
    visit[x][y] = true;
    temp++; // 현재 그룹 크기 증가

    for (int i = 0; i < 4; i++) { // 동서남북 탐색
        int tx = x + dx[i];
        int ty = y + dy[i];
        // 범위 내에 있고, 방문하지 않았으며, 같은 색의 병사라면 탐색 계속
        if (tx >= 0 && tx < m && ty >= 0 && ty < n && !visit[tx][ty] && battlefield[tx][ty] == color) {
            dfs(tx, ty, color);
        }
    }
}

int main() {
    FASTIO;

    cin >> n >> m;
    //battlefield.resize(m, vector<char>(n));
    //visit.resize(m, vector<bool>(n, false));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> battlefield[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!visit[i][j]) { // 방문하지 않은 병사라면
                temp = 0;
                dfs(i, j, battlefield[i][j]); // DFS로 그룹 크기 계산
                if (battlefield[i][j] == 'W') {
                    w += temp * temp; // 흰색 병사 위력
                } else {
                    b += temp * temp; // 파란색 병사 위력
                }
            }
        }
    }

    cout << w << ' ' << b << '\n';

    return 0;
}