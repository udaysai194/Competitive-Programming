#include<bits/stdc++.h>
using namespace std;

long long N = 10000005;
vector<long long> smallestPrimeFactor(N+1, 1);
//the below code is to find smallest prime factor of a given number
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

//the below code is used to find the prime factors of a number efficiently, using the above precompute smallestPrimeFactors function
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