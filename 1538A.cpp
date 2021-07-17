// CODEFORCES : 1538A - Stone Game
// If we want to destroy the largest and smallest stone, then there are only four options:

//1.Destroy the stones on the left until we destroy the smallest stone. 
//Then destroy the stones on the right, until we destroy the largest stone.
//2.Destroy the stones on the right until we destroy the smallest stone. 
//Then destroy the stones on the left, until we destroy the largest stone.
//3.Destroy the stones on the left until we destroy both stones.
//4.Destroy the stones on the right until we destroy both stones.

//You need to check all four options and choose the minimum answer:

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
#define rep for(int i=0;i<n;i++)
#define re for(int j=0;j<6;j++)
using namespace std;
 
int main(){
	int test ;cin>>test;
	while(test--){
	int n;
	cin>>n; vi v(n);
	rep
	cin>>v[i];
	int ma=max_element(v.begin(),v.end())-v.begin(); int mi=min_element(v.begin(),v.end())-v.begin();
	int ans= min( 
	max(ma,mi)+1,
	min((n-1)-min(mi,ma)+1,
	min((n-1)-ma+mi+2,
	(n-1)-mi+ma+2)));
	cout<<ans<<"\n";
}
	return 0;
}
