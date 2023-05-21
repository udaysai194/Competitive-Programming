#include<bits/stdc++.h>
using namespace std;
string solve() {
   unsigned long long int n;
   cin >> n;
   int count = 0;
   while(n) {
      if(n%10 == 4 || n%10 == 7) count++;
      n /= 10;
   }

   return count == 7 || count == 4 ? "YES" : "NO";
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