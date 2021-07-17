// CODEFORCES : 1538B - Friends and Candies
//Let's denote for s the number of candies all friends have: s=sum of a[i]/n.
// Note that at the end, each friend must have sum of n candy.
// If s is not completely divisible by n, then there is no answer.
// Then, if the answer exists, it is equal to the number of a[i]>s/n.

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
		ll n; cin>>n; vll a(n); ll s=0,c=0;
		for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
		}
		ll k=s%n; ll p=s/n;
		if(k!=0)
		cout<<"-1"<<"\n";
		else{
			for(int i=0;i<n;i++){
				if(a[i]>p)
				c++;
			}	
		cout<<c<<"\n";	
		}
	}
	return 0;
}
