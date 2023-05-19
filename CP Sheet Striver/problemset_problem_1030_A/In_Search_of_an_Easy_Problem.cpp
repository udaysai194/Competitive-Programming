#include<bits/stdc++.h>
using namespace std;


string solve() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int type;
        cin >> type;
        if(type == 1)   return "HARD";
    }

    return "EASY";
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
