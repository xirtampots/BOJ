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
    
    sort(v.begin(), v.end());

    // 부분 합 구하기
    int sum = 0, temp_sum = 0;
    for (int i = n; i > 0; i--) {
        temp_sum += v[n - i];
        sum += temp_sum;
    }

    cout << sum << '\n';
}
