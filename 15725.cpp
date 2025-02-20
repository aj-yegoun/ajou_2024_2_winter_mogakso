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
    
    string poly;
    cin >> poly;

    if(poly[0] == 'x'){
        cout << 1 << '\n';
        return 0;
    }

    bool flag = false;
    ll temp = 0;

    if(poly[0] == '-'){ // 마이너스일 때 처리
        if(poly[1] == 'x'){
            cout << -1 << '\n';
            return 0;
        }
        for (int i = 1; i < poly.size(); i++) {
            if(poly[i] == 'x'){
                flag = true;
                break;
            }
            temp *= 10;
            temp += poly[i] - '0';
        }
    
        if(flag == true){
            cout << temp*(-1) << '\n';
        }
        else{
            cout << 0 << '\n';
        }

        return 0;
    }

    for (auto x : poly)
    {

        if(x == 'x'){
            flag = true;
            break;
        }
        temp *= 10;
        temp += x - '0';
    }

    if(flag == true){
        cout << temp << '\n';
    }
    else{
        cout << 0 << '\n';
    }
    
    return 0;
}
