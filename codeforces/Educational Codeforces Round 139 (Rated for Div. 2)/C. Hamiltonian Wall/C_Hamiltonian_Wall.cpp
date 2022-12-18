#include<bits/stdc++.h>
using namespace std;
//https://www.youtube.com/watch?v=DGK1ieK39o0

string solve() {
	int n;
	cin >> n;
	string s[2];
	cin >> s[0] >> s[1];

	vector<vector<bool>> dp(2, vector<bool> (n, false));
	dp[0][n-1] = s[0][n-1] == 'B' ? true : false;
	dp[1][n-1] = s[1][n-1] == 'B' ? true : false;

	//3 cases here
	//case 1: if the current element is white - we can't move forward
	//case 2 : if both elements in a column is black - we go to the other element and go to adjacent of that element
	//case 3: if current element is black and other element is white - we go adjacent of current element 
	for(int j = n-2; j >= 0; j--) {
		for(int i = 0; i <= 1; i++) {
			if(s[i][j] == 'W')	dp[i][j] = false;
			else {
				if(s[i^1][j] == 'B')	dp[i][j] = dp[i^1][j+1];
				else					dp[i][j] = dp[i][j+1];
			}
		}
	}

	return dp[0][0] || dp[1][0]	? "YES" : "NO"; 
}

int main() {
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
