#include<bits/stdc++.h>
using namespace std;


int solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    return min((c*d)/n, min(((k*l)/nl)/n, (p/np)/n));
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
