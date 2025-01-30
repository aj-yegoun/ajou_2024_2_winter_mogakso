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

int n, m; 
int arr[101010];
int visited[101010];

void back_tracking(int cnt, int start){
    if(cnt == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    else{
        for(int i = start; i <= n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[cnt] = i;
                back_tracking(cnt+1, i+1);
                visited[i] = false;
            }
        }
    }
}

int main() {
    FASTIO;
    
    cin >> n >> m;
    back_tracking(0, 1);

    return 0;
}
