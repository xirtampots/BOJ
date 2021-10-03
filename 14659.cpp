#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int min_cnt = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = i + 1; j < n; j++) {
            if (v[i] >= v[j])
                cnt++;
            else if (v[i] < v[j])
                break;
        }
        if (cnt >= min_cnt)
            min_cnt = cnt;
    }

    cout << min_cnt << '\n';
}
