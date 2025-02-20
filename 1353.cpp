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

#define e 2.71828182846

int main() {
    FASTIO;
    
    ll s, p; cin >> s >> p;
    if(s == p){
        cout << 1 << '\n';
        return 0;
    }
    else if(pow(e, s/e) < p){
        cout << -1 << '\n';
        return 0;
    }
    else{
        long double temp = -1;
        int l = 2; // 리스트 길이
        while(1){
            long double current = pow(1.l*s/l, l);
            if (current < temp){
                cout << -1 << '\n';
                return 0;
            }
            else if (current >= p){
                cout << l << '\n';
                return 0;
            }
            l++;
        }
    }

    return 0;
}
