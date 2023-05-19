#include<bits/stdc++.h>
using namespace std;


int solve() {
    int n, faces = 0;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(s[0] == 'T')         faces += 4;
        else if(s[0] == 'C')    faces += 6;
        else if(s[0] == 'O')    faces += 8;
        else if(s[0] == 'D')    faces += 12;
        else                    faces += 20;
    }

    return faces;
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
