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

int main()
{
    FASTIO;

    int n, m, k;
    cin >> n >> m >> k;

    int result = min(log2(n), log2(k) + m);

    cout << result << '\n';

    return 0;
}
