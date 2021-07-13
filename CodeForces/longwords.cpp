#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n;
string s;

int main() {_
	cin >> n;

	while(n--){
		cin >> s;
		int t = s.size();

		if(t > 10) {
			cout << s[0] << t-2 << s[t-1] << endl;
		} else {
			cout << s << endl;
		}
	}
}
