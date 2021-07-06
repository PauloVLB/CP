#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, x;
vector<int> v;

int main(){_
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    auto it = lower_bound(v.begin(), v.end(), x);
    if (it == v.end()) {
      v.push_back(x);
    } else {
      *it = x;
    }
  }
  cout << v.size() << endl;
}