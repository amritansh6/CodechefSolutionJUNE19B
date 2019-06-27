#include <bits/stdc++.h>
#include <iomanip>
 
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define DECIMAL(n)  std::cout << std::fixed;std::cout << std::setprecision(n);
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define fi first 
#define se second
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))  
#define REVERSE(v) reverse(ALL(v))
#define endl "\n"
#define maxc(v) max_element(all(v))
#define minc(v) min_element(all(v))
#define GCD(m,n) __gcd(m,n)
#define debug cerr<<"bhau"<<endl
#define debugv(x) cerr<<x<<endl
#define inputarr(a,n) for(int i=0;i<n;++i) cin>>a[i]
#define printarr(a,n) for(int i=0;i<n;++i) cout<<a[i]<<" "
#define initarr(a,n,x) for (int i=0;i<n;++i) a[i]=x
 
#define ll long long
#define ld long double 
#define pii pair<int, int> 
#define pll pair<ll, ll>  
#define vi vector<int>  
#define vvi vector<vi > 
#define vii vector<pii >
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],pre[n],suf[n];
        inputarr(a,n);
        vector<ll> v;
        for(ll i=0;i<n;i++)
        v.pb(a[i]);
        
        SORT(v);
        v.resize(unique(ALL(v))-v.begin());
        if(v.size()==1)
        {cout<<v[0]*2<<endl;
            continue;
        }
        n=v.size();
        pre[0]=v[0];
        for(ll i=1;i<n;i++)
        {
            pre[i]=GCD(pre[i-1],v[i]);
        }
        suf[n-1]=v[n-1];
        for(ll i=n-2;i>=0;i--)
        suf[i]=GCD(suf[i+1],v[i]);
        
        ll ans=max(v[0]+suf[1],v[n-1]+pre[n-2]);
        for(ll i=1;i<n-1;i++)
        {
            ans=max(ans,v[i]+GCD(pre[i-1],suf[i+1]));
        }
        cout<<ans<<endl;
    }
}
