#include<bits/stdc++.h>
using namespace std;


void solve() {

    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> odds;
    vector<int> evens;

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        if(nums[i] & 1) odds.push_back(i+1);
        else            evens.push_back(i+1);

        if(odds.size() >= 1 && evens.size() >= 2) {
            cout << "YES" << endl;
            cout << odds[0] << " " << evens[0] << " " << evens[1];
            return;
        }

        if(odds.size() >= 3) {
            cout << "YES" << endl;
            cout << odds[0] << " " << odds[1] << " " << odds[2];
            return;
        }
    }

    cout << "NO";
    return;

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
