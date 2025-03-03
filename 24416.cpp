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

int cnt_1 = 0, cnt_2 = 0;
int fibo[1010101];

int fib(int n)
{
    if (n == 1 || n == 2){
        cnt_1++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}

int main() {
    FASTIO;

    int n;
    cin >> n;
    fib(n);

    cout << cnt_1 << ' ' << n-2 << '\n';
    return 0;
}
