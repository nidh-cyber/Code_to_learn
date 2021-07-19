// CODEFORCES : 1520B - Ordinary Numbers
// Note that every ordinary number can be represented as d·(100+101+…+10k).
// Therefore, to count all ordinary numbers among the numbers from 1 to n,
// it is enough to count the number of (d,k) pairs such that d·(100+101+…+10k)=n.
// In the given constraints,
// it is enough to iterate over d from 1 to 9 and k from 0 to 8.

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
	int test; cin>>test;
	while(test--){
		ll n;cin>>n;
		int res=0;
	for(ll i=1;i<=n;i=i*10+1){
		for(ll d=1;d<=9;d++){
			if(i*d<=n)
			res++;
		}
	}
	cout<<res<<endl;	
	}
	return 0;
}
