#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 1000005
#define i64 long long

using namespace std;

i64 sd[MAX], psa[MAX];
int q, a, b;

bool eh_primo(int n) {
    return sd[n] == n+1;
}

void crivo()
{
	for (int i = 1; i <= MAX; i++) {
		for (int j = i; j <= MAX; j += i) {
			sd[j] += i;
        }
    }

    for(int i = 3; i <= MAX; i++) {
        psa[i] = psa[i-1] + ((eh_primo(i) && eh_primo(i+2)) || (eh_primo(i-2) && eh_primo(i)));
    }
}

int main() {_

    crivo();

    cin >> q;

    while(q--) {
        cin >> a >> b; 
        cout << psa[max(a,b)] - psa[min(a,b)-1] << endl;
    }
}