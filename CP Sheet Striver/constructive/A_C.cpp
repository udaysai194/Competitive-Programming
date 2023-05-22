#include<bits/stdc++.h>
using namespace std;
int solve() {
    int a, b, n;
    cin >> a >> b >> n;
    int maxVal = a > b ? a : b;
    int minVal = a > b ? b : a;
    int temp, count = 0;

    while(maxVal <= n) {
        temp = maxVal;
        maxVal += minVal;
        minVal = temp;
        count++;
    }
    
    return count;
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