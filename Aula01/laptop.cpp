#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pii pair<int, int>

using namespace std;

int n;
vector<pii> l;

bool cmp(pii a, pii b) {
    return a < b;
}

int main() {_
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        l.push_back({a,b});
    }

    sort(l.begin(), l.end(), cmp);

    int last = l[0].second;
    for(int i = 1; i < n; i++) {
        if(l[i].second < last) {
            cout << "Happy Alex" << endl;
            return 0;
        } 
        last = l[i].second;
    }
    
    cout << "Poor Alex" << endl;
    return 0;
}