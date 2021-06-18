#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n, x;
char e;
int t;
int ta[105]; // tempo do amigo 
char ult[105]; // ultimo evento do amigo
int te[105]; // momento da ultima msg recebida pelo amigo

int main() {_ 
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> e >> x;

        if(e == 'R') {
            ult[x] = 'R';
            te[x] = t;
        } else if(e == 'E') {
            ult[x] = 'E';
            ta[x] += t - te[x];
        } else {
            t += x;
            t--;
            continue;
        }

        t++;
    }

    for(int i = 1; i <= 100; i++) {
        if(ult[i] == 'E') {
            cout << i << " " << ta[i] << endl;
        } else if(ult[i] == 'R') {
            cout << i << " " << -1 << endl;
        }
    }
}