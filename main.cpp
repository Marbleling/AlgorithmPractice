#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <string.h>
using namespace std;

int n, m;
int price[1005][1005] = {0};

int rnk[1005] = {0};
int p[1005] = {0};
int re = 0;

void init() {
    for(int i=1;i<=n;i++) {
        rnk[i] = 1;
        p[i] = i;
    }
}

int get_root(int x) {
    int y = p[x];
    while(y != p[y]) {
        y = p[y];
    }
    p[x] = y;
    return y;
}

bool merge(int x, int y) {
    x = get_root(x);
    y = get_root(y);

    if(x == y) {
        return false;
    } else {
        if(rnk[x] < rnk[y]) {
            p[x] = y;
        } else {
            p[y] = x;
        }

        if(rnk[x] == rnk[y]) {
            rnk[x]++;
        }

        return true;
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    priority_queue<pair<int, pair<int, int>>> pq;
    for(int i=0;i<m;i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if(x == y) continue;

        if(price[x][y] == 0 || price[x][y] > z) { // 기존 값보다 더 작은 값이 들어왔을 때 변경해줌
            price[x][y] = z;
            price[y][x] = z;

            pq.push({-z, {x, y}});
        }
    }
    init();

    while(!pq.empty()) {
        int z = -pq.top().first;
        int x = pq.top().second.first, y = pq.top().second.second;
        pq.pop();

        if(merge(x, y)) { // 기존에 없던 노드들이라면
            re += z;
        }
    }
    cout << re;
    return 0;
}