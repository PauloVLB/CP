#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pb push_back
#define MAXN 100005

using namespace std;

int n;
vi v, nlr, nll;
stack<int> st;

int main() {_
    cin >> n;
    v = vi(n);
    nlr = vi(n+1); nll = vi(n+1);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    v.insert(v.begin(), INT_MIN);

    for(int i = n; i >= 0; i--) {
        while(!st.empty() && v[st.top()] > v[i]) {
            nll[st.top()] = i;
            st.pop();                              
        }           
        st.push(i);
    }

    for (int i=1; i<=n; ++i){
        cout << (nll[i] == 0 ? -1 : v[nll[i]]) << " ";
    } 
    cout << endl;

    return 0;
   
}