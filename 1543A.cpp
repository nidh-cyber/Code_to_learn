// CODEFORCES : 1543A - Exciting Bets

// If a=b, the fans can get an infinite amount of excitement, 
//and we can achieve this by applying the first operation infinite times.
// Otherwise, the maximum excitement the fans can get is gcd, g=|a-b| and
// the minimum number of moves required to achieve it is min of [(gcd(a,b)-(a%(a-b))),(a%(a-b))]

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
		ll a,b; cin>>a>>b;
		if(a==b)
		cout<<"0 0\n";
		else{
			ll g=abs(a-b);
			ll p=a%g;
			ll s=g-p;
			ll mi=min(s,p);
			cout<<g<<" "<<mi<<endl;
		}
		}
	return 0;
}
