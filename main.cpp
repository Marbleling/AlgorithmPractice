#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while(true) {
        string s;
        stack<int> st;

        getline(cin, s);
        if(s.size() == 1 && s[0] == '.') {
            break;
        }
        bool is_balanced = true;
        for(int i=0;i<s.size();i++) {
            if(s[i] == '[') {
                st.push(1);
            } else if(s[i] == ']') {
                if(st.size() == 0 || st.top() != 1) {
                    is_balanced = false;
                    break;
                } else {
                    st.pop();
                }
            } else if(s[i] == '(') {
                st.push(2);
            } else if(s[i] == ')') {
                if(st.size() == 0 || st.top() != 2) {
                    is_balanced = false;
                    break;
                } else {
                    st.pop();
                }
            }
        }
        if(st.size() != 0) {
            is_balanced = false;
        }
        if(is_balanced) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
    return 0;
}