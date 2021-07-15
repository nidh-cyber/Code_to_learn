// CODEFORCES : 1543B - Customising the Track

// In the optimal arrangement, the number of traffic cars will be distributed as evenly as possible,
// i.e., |ai-aj|=1 for each valid (i,j).

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long 
#define lli long long int
#define pb push_back
#define mod 1000000007
#define F first
#define mod 1000000007
#define S second
#define mp make_pair
#define ss stack<int>
#define vi vector<int>
#define vll vector<long long int>
#define all(x) (x).rbegin(),(x).rend()
#define rep for(int i=1;i<=n;i++)
#define re for(int j=m-1;j>=0;j--)
using namespace std;

int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n; vll a(n); ll s=0;
		for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
		}
		ll k=s%n;
		ll ans=(k*(n-k));
		cout<<ans<<"\n";
	}
	return 0;
}
