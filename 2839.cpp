#include <iostream>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <vector>
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    FASTIO;

    int n; cin >> n;
    int count = 0;
    while(1){
        if(n%5 == 0){
            count += n/5;
            break;
        }
        else if(n < 0){
            cout << -1 << '\n';
            return 0;
        }
        else {
            n -= 3;
            count++;
        }
    }
    cout << count << '\n';

    return 0;
}
