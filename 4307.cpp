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

int main() {
    FASTIO;

    int t; cin >> t;
    while (t--)
    {
        int leng, n;
        cin >> leng >> n;
        vector<int> ants(n);
        int min = 1e9;
        for(int i = 0; i < n; i++){
            cin >> ants[i];
            if(ants[i] < min){
                min = ants[i];
            }
        }



        
        cout << leng - min << ' '; // 가장 늦은 시간
    }
    
    return 0;
}
