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

int compare(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    }
    else return a.length() < b.length();
}

int main() {
    FASTIO;

    int n; cin >> n;
    vector<string> words(n);
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }

    stable_sort(words.begin(), words.end(), compare);

    for(int i = 0; i < n; i++){
        if(i == 0 || words[i-1] != words[i]){
            cout << words[i] << '\n'; 
        }
    }

    return 0;
}
