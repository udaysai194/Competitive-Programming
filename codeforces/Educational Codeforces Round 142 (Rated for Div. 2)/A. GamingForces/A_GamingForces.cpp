#include<bits/stdc++.h>
using namespace std;


int solve() {

    int n, oneCount = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int health;
        cin >> health;
        if(health == 1) oneCount++;
    }

    return n - oneCount + (oneCount/2) + (oneCount & 1);
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
