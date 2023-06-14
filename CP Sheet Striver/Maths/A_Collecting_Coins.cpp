#include<iostream>
#include<bits/stdc++.h>
#define input(x, n) for(int i = 0; i < (n); i++)  cin >> (x)[i]
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())

using namespace std;

string solve() {
    int a[3], n;
    cin >> a[0] >> a[1] >> a[2] >> n;
    sort(a, a + 3);
    int sum = (a[2]-a[0])+(a[2]-a[1]);
    return (n-sum >= 0) && (n-sum)%3 == 0 ? "YES" : "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
    return 0;
}