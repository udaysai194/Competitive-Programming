#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
#include <algorithm>
using namespace std;

long long N = 10000005;
vector<long long> smallestPrimeFactor(N+1, 1);

void preComputeSmallestPrimeFactors() {

    for(long long i = 2; i <= N; i++) {
        if(smallestPrimeFactor[i] == 1) {
            smallestPrimeFactor[i] = i;
            for(long long j = i*i; j <= N; j += i) {
                if(smallestPrimeFactor[j] == 1) smallestPrimeFactor[j] = i;
            }
        }
    }
    
}

vector<long long> factorize(long long num) {

    vector<long long> factors;

    while(num > 1) {
        long long factor = smallestPrimeFactor[num];
        while(num % factor == 0) {
            num /= factor;
        }

        factors.push_back(factor);
    }

    return factors;
}

long long solve() {
    long long x, y;
    cin >> x >> y;

    if(__gcd(x, y) != 1)    return 0;
    if(x > y)               swap(x, y);

    long long diff = y-x;
    if(diff == 1)           return -1;
    
    vector<long long> primeFactors = factorize(diff);

    long long longestSequenceLength = LLONG_MAX;

    for(auto pf : primeFactors) {
        longestSequenceLength = min(longestSequenceLength, pf - (x%pf));
    }
    
    return longestSequenceLength;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    preComputeSmallestPrimeFactors();

	long long t;
	cin >> t;

	while(t--) {

		cout << solve() << endl;

	}

	return 0;
}
