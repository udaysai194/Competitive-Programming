#include<bits/stdc++.h>
using namespace std;

unsigned long long int reverse(unsigned long long int num) {
    unsigned long long int rev = 0;
    while(num) {
        rev = rev*10 + num%10;
        num /= 10;
    }
    return rev;
}

void solve() {

    unsigned long long int num;
    cin >> num;

    unsigned long long int invertedNum = 0;

    while(num) {
        invertedNum *= 10;
        //cout << invertedNum << endl;
        if(num % 10 >= 5)                           invertedNum += 9 - num%10;
        else                                        invertedNum += num%10;
        if(num/10 == 0 && invertedNum%10 == 0)      invertedNum /= 10;              
        num = num/10;
    }

    cout << reverse(invertedNum);
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
