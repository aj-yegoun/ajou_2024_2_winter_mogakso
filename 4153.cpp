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
        ll a, b, c;
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c ==0){
            return 0;
        }

        if (((a * a + b * b) == c * c) || ((c * c + b * b) == a * a) || ((a * a + c * c) == b * b))
        {
            cout << "right" << '\n';
        }
        else{
            cout << "wrong" << '\n';
        }
    }
    return 0;
}
