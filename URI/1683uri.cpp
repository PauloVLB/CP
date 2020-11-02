#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pb push_back
#define MAXN 100005
#define i64 long long

using namespace std;

int n;
i64 h, b, ans;
vi v, nlr, nll;
stack<int> st;

int main() {_
    while((cin >> n) && n) {
        v = vi(n);
        nlr = vi(n+1); nll = vi(n+1);

        v.pb(INT_MIN);
        for(int i = 1; i <= n; i++) cin >> v[i];
        v.pb(INT_MIN);

        for(int i = 1; i <= n+1; i++) {
            while(!st.empty() && v[st.top()] > v[i]) {
                nlr[st.top()] = i;
                st.pop();                              
            }           
            st.push(i);
        }
        
        while(!st.empty()) st.pop();

        for(int i = n; i >= 0; i--) {
            while(!st.empty() && v[st.top()] > v[i]) {
                nll[st.top()] = i;
                st.pop();                              
            }           
            st.push(i);
        }

        for(int i = 0; i <= n; i++) {
            h = v[i];
            b = nlr[i] - nll[i] - 1;
            ans = max(ans, h*b);
        }

        cout << ans << endl;
        ans = 0;
        while(!st.empty()) st.pop();
    }  
    return 0;
}