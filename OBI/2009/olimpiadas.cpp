#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct pais {
    int ou;
    int pr;
    int br;
    int id;
};

pais v[101];

int n, m;

bool cmp(pais a, pais b) {
    if(a.ou == b.ou && a.pr == b.pr) return a.br > b.br;
    if(a.ou == b.ou) return a.pr > b.pr;
    return a.ou > b.ou;
}

int main() {_
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        v[i].id = i;
    }

    for(int i = 0; i < m; i++) {
        int o, p, b;
        cin >> o >> p >> b;
        v[--o].ou++;
        v[--p].pr++;
        v[--b].br++;
    }

    stable_sort(v, v+n, cmp);

    for(int i = 0; i < n; i++) {
        cout << v[i].id + 1<< " ";
    }
    cout << endl;

    return 0;
}