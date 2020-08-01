#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <string.h>
using namespace std;

int n;
vector<pair<int, int>> vc[55];

bool comp(const pair<int, int> a, const pair<int, int> b) {
    return a.first > b.first;
}

int dfs(int here) {
    int ret = 0;
    for(int i=0;i<vc[here].size();i++) {
        int next = vc[here][i].second;
        vc[here][i].first = 1 + dfs(next);
    }

    sort(vc[here].begin(), vc[here].end(), comp);

    for(int i = 0;i<vc[here].size();i++) {
        vc[here][i].first += i;
        ret = max(ret, vc[here][i].first);
    }

    return ret;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        if(val != -1) {
            vc[val].push_back({0, i});
        }
    }


    cout << dfs(0);

    return 0;
}