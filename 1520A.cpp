// CODEFORCES : 1520A - Do Not Be Distracted!
// The simplest solution — go through the problem, because of which the teacher might have suspicions.
// Now you can find the first day when Polycarp solved this problem and the last such day.
// Between these two days, all problems should be the same.
// If this is not the case, the answer is "NO".

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

void solve(){
		int n;string s;
	cin>>n>>s;
	for(char ch='A';ch<='Z'; ch++){
		int f=n,l=-1;
		for(int i=0;i<n;i++){
			if(s[i]==ch){
				f=min(f,i); l=max(l,i);
			}
		}
		for(int j=f;j<=l;j++){
			if(s[j]!=ch){
			cout<<"NO\n";
			return;
		}
	}
	}
	cout<<"YES\n";
}
int main(){
	int test; cin>>test;
	while(test--){
	solve();	
	}
	return 0;
}
