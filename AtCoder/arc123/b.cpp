#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>

using namespace std;

int n;
vi a, b, c;

int main() {_ 
    cin >> n;

    a = vi(n);
    b = vi(n);
    c = vi(n);


    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cin >> c[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int ans = 0;

    auto ib = b.begin(); // pro auto funcionar tem q ter algo no lado direito
    auto ic = c.begin();

    for(int i = 0; i < n; i++) {
        auto fb = upper_bound(ib, b.end(), a[i]); 
        // while(*fb == a[i]) fb++;
        // b.erase(b.begin(), fb+1);
        if(fb == b.end()) {
            break;
        }

        auto fc = upper_bound(ic, c.end(), *fb);
        //while(*fc == *fb) fc++;
        // c.erase(c.begin(), fc+1);
        if(fc == c.end()) {
            break;
        }

        // cout << *ib << " " << *ic << endl;
        ib = fb+1;
        ic = fc+1;
        ans++;
    }

    cout << ans << endl;
}