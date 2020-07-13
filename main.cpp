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

int n;
int s[20][20] = {0};
int team[20] = {0};
int ans = 987654321;

int calc_score(int t) {
    int start = 0;
    int score = 0;
    while(start < n) {
        if(team[start] == t) {
            for(int i=0;i<n;i++) {
                if(team[i] == t) {
                    score += s[start][i];
                }
            }
        }
        start++;
    }
    return score;
}

void f(int stage) {
    if(stage == n) {
        int sc1 = calc_score(0);
        int sc2 = calc_score(1);
        if(sc1 != 0 && sc2 != 0) {
            ans = min(ans, abs(sc1-sc2));
        }
        return;
    }

    team[stage] = 1;
    f(stage+1);
    team[stage] = 0;
    f(stage+1);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> s[i][j];
        }
    }

    f(0);
    cout << ans;

    return 0;
}