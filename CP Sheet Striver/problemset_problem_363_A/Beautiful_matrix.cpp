#include<bits/stdc++.h>
using namespace std;


int solve() {

    int mat[5][5];
    int row, col;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if(mat[i][j] == 1) {
                row = i+1;
                col = j+1;
            }
        }

    return abs(row-3)+abs(col-3);
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
