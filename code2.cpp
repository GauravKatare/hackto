#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int ll;
#define ass 1e18
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define fi first
#define se second
#define sz(x)    (ll)x.size()
#define present(c,x) ((c).find(x) != (c).end())
#define debug(x) cout << #x << ": " << x << endl;
#define debug2(x,y) cout<<#x<<": "<< x<< ", "<< #y<< ": "<< y<< endl;
#define debug3(x,y,z) cout<<#x<<": "<< x<< ", "<< #y<< ": "<< y<<" "<<#z<<" : "<<z<< endl;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;   
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
ll arr[200005];

ll interact(ll q){
    ll r;
    cout<<q<<endl;
    cin>>r;
    return r;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    if(interact(0))
        return;
   for(int i=1;i<n;i++){
        if(interact(i^(i-1)))
            return;
   }
}

int main()
{
    boost
    ll t=1;
    fflush(stdout);
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
