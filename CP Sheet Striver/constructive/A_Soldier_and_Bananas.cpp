#include<bits/stdc++.h>
using namespace std;
int solve() {
    int k, n, w;
    cin >> k >> n >> w;
    int money = k*(w*(w+1)/2) - n;
    return money > 0 ? money : 0;
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