#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::pair;

struct answer {
    int a1, a2, b;
};

pair<int, int> sums(vector<pair<int, int>> v, int s) {
    int l = 0;
    int r = (int) v.size() - 1;

    while(l < r) {
        int sum = v[l].first + v[r].first;

        if(sum == s) {
            return {v[l].second, v[r].second};
        } else if(sum < s) {
            l++;
        } else {
            r--;
        }
    }

    return {-1, -1};
}

answer sum_of_two(vector<int> a, vector<int> b) {
    vector<pair<int, int>> a_copy;
    for(int i = 0; i < (int) a.size(); i++) {
        a_copy.push_back({a[i], i});
    }

    sort(a_copy.begin(), a_copy.end());

    answer ans;
    ans.a1 = ans.a2 = ans.b = -1;

    for(int i = 0; i < (int) b.size(); i++) {
        auto result_ids = sums(a_copy, b[i]);

        if(result_ids.first != -1) {
            ans.a1 = result_ids.first;
            ans.a2 = result_ids.second;
            ans.b = i;

            return ans;
        }
    }

    return ans;
}

int main() {
    int n; cin >> n;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    auto result = sum_of_two(a, b);

    printf("a[%d] = %d\n", result.a1, a[result.a1]);
    printf("a[%d] = %d\n", result.a2, a[result.a2]);
    printf("b[%d] = %d\n", result.b, b[result.b]);

    cout << a[result.a1] << " + " << a[result.a2] << " = " << b[result.b] << endl;
}