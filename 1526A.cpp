#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long 
#define pb push_back
#define mod 1000000007
#define F first
#define S second
#define mp make_pair
#define vi vector<int>
#define vll vector<long long>
#define rep for(int i=0;i<2*n;i++)
#define re for(int j=0;j<n;j++)
using namespace std;
 
int main(){
	int test ;cin>>test;
	while(test--){
		ll n; cin>>n; vi v(2*n),vc(n),vv(n); int k=0;
		rep{ 
		cin>>v[i];
	}
	sort(v.begin(),v.end());
 
	for(int i=0;i<n;i++){
	cout<<v[i]<<" "<<v[i+n]<<" ";
}
	cout<<"\n";
}
return 0;
}
