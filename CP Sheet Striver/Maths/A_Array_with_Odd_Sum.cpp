#include<iostream>
#include<bits/stdc++.h>
#define input(x, n) for(int i = 0; i < (n); i++)  cin >> (x)[i]
#define all(x) (x).begin(), (x).end()
#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())

using namespace std;

string solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    input(a,n);
    int oddCount = 0, evenCount = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] & 1)    oddCount++;
        else            evenCount++;
    }
    
    if(evenCount == n)              return "NO";
    if(oddCount == n && n%2 == 0)   return "NO";

    return "YES";
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