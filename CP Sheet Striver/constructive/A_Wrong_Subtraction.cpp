#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, k;
    cin >> n >> k;
    while(k--) {
        if(n%10 == 0)   n /= 10;
        else            n--;
    }

    return n;
}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int t = 1;
   //cin >> t;
 
   while(t--) {
 
      cout << solve() << endl;
 
   }
 
   return 0;
}