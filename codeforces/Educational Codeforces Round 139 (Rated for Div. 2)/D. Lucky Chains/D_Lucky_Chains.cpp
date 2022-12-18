#include<bits/stdc++.h>
using namespace std;

int smallestPrimeFactor[10000005];

void preComputeSmallestPrimeFactors() {
    memset(smallestPrimeFactor, sizeof(smallestPrimeFactor), 1);

    int sqrtN = sqrt(10000);
    for(int i = 2; i <= sqrtN; i++) {
        for(int j = i+i; j < 10000005; j += i) {
            smallestPrimeFactor[j] = i;
        }
    }
}

int solve() {
    int x, y;
    cin >> x >> y;

    if(__gcd(x, y) != 1)    return 0;
    if(abs(x-y) == 1)       return -1;
    if(x > y)               swap(x, y);
    
    int diff = y-x;
    preComputeSmallestPrimeFactors();
    //vector<int> primeFactors = factorize(diff);
    

}

int main() {
	int t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
