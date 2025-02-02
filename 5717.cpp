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

int main() {
    FASTIO;
    
    while(1){
        int m, f;
        cin >> m >> f;
        if(m == 0 && f == 0){
            return 0;
        }
        cout << m+f << '\n';
    }

    return 0;
}
