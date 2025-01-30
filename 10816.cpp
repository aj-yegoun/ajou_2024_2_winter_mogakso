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

int OFFSET = 10000000;  // 음수 처리를 위한 오프셋
int number[20000001];

int main() {
    FASTIO;

    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        number[x + OFFSET]++;
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        cout << number[x + OFFSET] << ' ';
    }
    cout << '\n';

    return 0;
}
