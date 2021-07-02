#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 100005
#define vi vector<int>

using namespace std;

int t, n, k;
string s;

int main() {_
    cin >> t;

    while(t--) {
        cin >> n >> k;
        cin >> s;

        int pontos = s[0] == 'W';
        int perdeu = 0;
        int prox = 0;

        vi seqp;

        for(int i = 1; i < n; i++) {
            if(s[i] == 'W') {
                pontos += (s[i-1] == 'W') + 1;
                if(prox) {
                    seqp.push_back(prox);
                    prox = 0;
                }
            } else {
                if(s[i-1] == 'L') {
                    prox++;
                }
            } 
        }

        if(prox) {
            seqp.push_back(prox);
        }

        sort(seqp.begin(), seqp.end());
        cout << t << ": ";
        for(int x : seqp) {
            cout << x+1 << " ";
        }
        cout << endl;
    }

}
