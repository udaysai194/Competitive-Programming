#include<bits/stdc++.h>
using namespace std;

void solve() {

    unsigned long long int num, invertedNum = 0, pow = 1;
    cin >> num;

    while(num) {
        if(num % 10 >= 5)        invertedNum += pow*(9-num%10);
        else                     invertedNum += pow*(num%10);
        if(num == 9)             invertedNum += pow*9;              
        num = num/10;
        pow = pow*10;
    }

    cout << invertedNum;
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
