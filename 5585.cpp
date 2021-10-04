#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int n, answer = 0;
    cin >> n;
    n = 1000 - n;

    if (n >= 500) {
        answer = n / 500;
        n %= 500;
    }
    if (n >= 100) {
        answer += n / 100;
        n %= 100;
    }
    if (n >= 50) {
        answer += n / 50;
        n %= 50;
    }
    if (n >= 10) {
        answer += n / 10;
        n %= 10;
    }
    if (n >= 5) {
        answer += n / 5;
        n %= 5;
    }
    answer += n;
    cout << answer << '\n';
}
