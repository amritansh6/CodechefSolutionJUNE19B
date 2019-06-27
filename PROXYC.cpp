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
        float d;
        cin>>d;
        string s;
        cin>>s;
        ll count=0;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='P')
            count++;
        }
        float ans;
        ans=count/d;
        
       
            ll count1=0;
            for(ll i=2;i<d-2&& ans<0.75;i++)
            {
                if((s[i]=='A') && (s[i-1]=='P'||s[i-2]=='P') && (s[i+1]=='P'||s[i+2]=='P'))
                {count++;
                 ans=count/d;
                count1++;
                   
                }
                
                
            }
           if(ans<0.75)
           cout<<"-1"<<endl;
           else
           cout<<count1<<endl;
        
    }
}
