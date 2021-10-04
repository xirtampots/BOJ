#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, k, answer = 0;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    reverse(v.begin(), v.end());

    for (auto e : v) {
        if (e > k)
            continue;
        answer += k / e;
        k %= e;
    }

    cout << answer << '\n';
}
