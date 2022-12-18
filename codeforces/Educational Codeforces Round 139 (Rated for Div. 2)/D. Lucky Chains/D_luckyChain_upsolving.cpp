#include<bits/stdc++.h>
using namespace std;
#define DIVYA ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define fo(i,a,b) for(i=a;i<=b;i++)
typedef vector<ll> vll;
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 1000000000000000005
const ll mod = 1e9 + 7;
ll N = 10000005;
vll spf(N + 1, 1);
void sieve()
{
    ll i, j;
    fo(i, 2, N)
    {
        if (spf[i] == 1)
        {
            spf[i] = i;
            for (j = i * i; j <= N; j += i)
            {
                if (spf[j] == 1)spf[j] = i;
            }
        }
    }
}
vll factorize(ll n)
{
    vll ans;
    while (n > 1)
    {
        ll fact = spf[n];
        while (n % fact == 0)
        {
            n /= fact;
        }
        ans.pb(fact);
    }
    return ans;
}
 
int main() {
    DIVYA;
    ll t, n, i, j, ans, temp, sum;
    string sans;
    t = 1;
    cin >> t;
    sieve();
    while (t--)
    {
        sans = "NO";
        ans = temp = sum = 0;
        ll x,y;
        cin >> x>>y;
        ll g = __gcd(x,y);
        if(g != 1)
        {
            cout<<0<<"\n";
            continue;
        }
        if(x > y)swap(x,y);
 
        ll diff = y - x;
 
        if(diff == 1)
        {
            cout<<-1<<"\n";
            continue;
        }
 
 
        vll pf = factorize(diff);
 
        ll mn = inf;
 
        for(auto p : pf)
        {
            ll to_add = p - (x%p);
            mn = min(mn,to_add);
        }
        cout<<mn<<"\n";
    }
    return 0;
}
 