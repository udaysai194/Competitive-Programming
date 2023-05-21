#include<bits/stdc++.h>
using namespace std;


int solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int minVal, maxVal;
	minVal = min(a, min(b, c));
	maxVal = max(a, max(b, c));
	// int ans = INT_MAX;
	// for(int i = minVal; i <= maxVal; i++) {
	// 	ans = min(ans, abs(i-a)+abs(i-b)+abs(i-c));
	// }
	return maxVal-minVal;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	// int t;
	// cin >> t;

	// while(t--) {

	// 	cout << solve() << endl;

	// }
	cout << solve();
	return 0;
}
