#include<bits/stdc++.h>
using namespace std;


int solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)  cin >> nums[i];

    int minIndex = 0, maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(nums[minIndex] >= nums[i])   minIndex = i;
        if(nums[maxIndex] < nums[i])  maxIndex = i;
    }

    int count = 0;
    count += (n-1)-minIndex;
    count += maxIndex;

    if(maxIndex >= minIndex)    count -= 1;
    return count;

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
