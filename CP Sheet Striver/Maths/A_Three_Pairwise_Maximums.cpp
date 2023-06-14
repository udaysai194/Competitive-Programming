#include<iostream>
#include<bits/stdc++.h>
#define input(x, n) for(int i = 0; i < (n); i++)  cin >> (x)[i]
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())

using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    if(x == y || x == z || y == z) {
        int maxVal = max(x, max(y,z));
        int minVal = min(x, min(y,z));
        if(x == maxVal && y == maxVal && z == minVal)
            cout << "YES" << "\n" << maxVal << " " << minVal << " " << 1;
        else if(x == maxVal && y == minVal && z == maxVal)
            cout << "YES" << "\n" << minVal << " " << maxVal << " " << 1;
        else if(x == minVal && y == maxVal && z == maxVal)
            cout << "YES" << "\n" << minVal << " " << 1 << " " << maxVal;
        else
            cout << "NO";
    } else {
        cout << "NO";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}