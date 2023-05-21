#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    int pow = 1, count = 0;
    vector<int> summands;
    while(n) {
        if(n%10 != 0) {
            summands.push_back(pow*(n%10));
            count++;
        }
        pow *= 10;
        n /= 10;
    }
    cout << count << " " << endl;
    for(auto a : summands) {
        cout << a << " ";
    }
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin >> t;

	while(t--) {

		solve();
        cout << endl;
	}

	return 0;
}
