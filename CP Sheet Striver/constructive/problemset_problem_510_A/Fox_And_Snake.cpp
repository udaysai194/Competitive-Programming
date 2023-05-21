#include<bits/stdc++.h>
using namespace std;

void solve() {

    int row, col;
    cin >> row >> col;

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++) {
            if(i%2 == 1)                     cout << "#";
            else if(j == 1 && i%4 == 0)      cout << "#";
            else if(j == col && i%4 == 2)    cout << "#";    
            else                             cout << ".";

        }
        cout << "\n";
    }

}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	// int t;
	// cin >> t;

	// while(t--) {

	// 	cout << solve() << endl;

	// }
    solve();
	return 0;
}
