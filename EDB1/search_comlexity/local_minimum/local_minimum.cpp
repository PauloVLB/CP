#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

#define INF 0x3f3f3f3f

int pre(vector<int> a, int i) {
    if((a[i] < a[i-1] && a[i] < a[i+1])) {
        return 0;
    } else if(a[i] > a[i-1]) {
        return -1;
    } else {
        return 1;
    }
}

int local_minimum(vector<int> a) {
    int l = 1;
    int r = (int) a.size() - 1;

    while(l <= r) {
        int m = l + (r-l)/2;

        int p = pre(a, m);

        if(p == 0) {
            return a[m];
        } else if(p == -1) {
            r = m-1;
        } else {
            l = m+1;
        }
    }

    return -1;
}

int main() {

    int n; cin >> n;

    vector<int> a(n+2);

    a[0] = INF;
    a[n+1] = INF;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    do {
        cout << '[';
        for(int i = 1; i <= n; i++) {
            cout << a[i] << (i == n ? "" : ", ");
        }
        cout << "]\n";

        int lm = local_minimum(a);

        int enc = std::find(a.begin(), a.end(), lm) - a.begin();
        
        if(pre(a, enc) != 0) {
            cout << "OPA" << endl;
            return 0;
        }

    } while(std::next_permutation(a.begin()+1, a.end()-1));
}