#include<bits/stdc++.h>
using namespace std;


string solve() {
    int n, evenCount = 0, oddCount = 0, minVal = INT_MAX;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] & 1)    oddCount++;
        else            evenCount++;
        if(a[i] < minVal)   minVal = a[i];
    }

    if(minVal & 1)          return "YES";
    else if(!oddCount)      return "YES";
    else                    return "NO";

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
