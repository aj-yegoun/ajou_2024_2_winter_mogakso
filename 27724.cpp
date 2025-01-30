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

    int count_2 = 0;
    while (n != 1)
    {
        count_2++;
        n /= 2;
    }

    int win = 0;
    int temp = 2;
    while (1)
    {
        if (temp <= k)
        {
            win++;
            temp *= 2;
        }
        else
        {
            break;
        }
    }

    win += m;
    if (win >= count_2)
    {
        win = count_2;
    }

    cout << win << '\n';

    return 0;
}
