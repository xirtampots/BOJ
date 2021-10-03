#include <bits/stdc++.h>
using namespace std;

// 정렬을 위한 함수 - pair의 second 기준으로 오름차순
bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        v.push_back(make_pair(start, end));
    }

    sort(v.begin(), v.end(), compare);

    int cnt = 0;
    pair<int, int> temp = make_pair(0, 0);
    for (auto e : v) {
        if (temp.second > e.first)
            continue;
        temp = e;
        cnt++;
    }

    cout << cnt << '\n';
}
