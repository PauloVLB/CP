#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

struct tvector{
    double x, y;

    tvector operator +(tvector q) const{
        return {x + q.x, y + q.y};
    }
    tvector operator -(tvector q) const{
        return {x - q.x, y - q.y};
    }
    double operator ~() const {
        return hypot(x, y);
    }
    double operator *(tvector q) const {
        return (x*q.x + y*q.y);
    }
    double operator ^(tvector q) const {
        return (x*q.y - y*q.x);
    }
};

int n, ans;
double xc, yc, raio, xa, ya, xb, yb, dist;
tvector r, p, q;

double distPontoReta(tvector p, tvector q, tvector r) {
    return fabs((r-p)^(q-p))/(~(q-p));
}

int main() {
    cin >> n >> xc >> yc >> raio;
    r = {xc, yc};
    while(n--) {
        cin >> xa >> ya >> xb >> yb;
        dist = distPontoReta({xa, ya}, {xb, yb}, r);
        ans += dist <= raio;
    }

    cout << ans << endl;
}