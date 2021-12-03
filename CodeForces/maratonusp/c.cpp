#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>

using namespace std;

int main() {_ 
    int q, n; cin >> q >> n;

    vector<string> sorte(q);
    for(int i = 0; i < q; i++) {
        cin >> sorte[i];
    }

    vector<int> f(10, 0);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        f[x]++;
    }

    int limit = 1 << q;
    bitset<8> ans = 0;

    for(int i = 0; i < limit; i++) {
        bitset<8> b = i;

        int da = 1;
        vector<int> ff = f;   

        for(int j = 0; j < q; j++) {
            if(b[j] == 1) {
                for(char c : sorte[j]) {
                    int num = c - '0';
                    if(ff[num]) {
                        ff[num]--;
                    } else {
                        da = 0;
                        break;
                    }
                }
            }    
        }

        if(da && (b.count() > ans.count())) {
            ans = b;
        }
    }   

    cout << ans.count() << endl;

    for(int i = 0; i < q; i++) {
        if(ans[i]) {
            cout << sorte[i] << " ";
        }
    }

    cout << endl;
}