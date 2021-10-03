#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < 2 * n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int answer = 987654321;
    for (int i = 0; i < v.size(); i++) {
        answer = min(answer, v[i] + v[2 * n - 1 - i]);
    }

    cout << answer << '\n';
}
