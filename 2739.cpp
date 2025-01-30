#include <iostream>
#include <algorithm>
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

    int n;
    cin >> n;
    for(int i = 1; i <= 9; i++){
        cout << n << " * " << i << " = " << n*i << '\n';
    }

    return 0;
}
