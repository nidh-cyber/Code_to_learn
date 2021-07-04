/* Problem - 1526A -Mean Inequality - Codeforces. You are given an array a of 2*n distinct integers.
You want to arrange the elements of the array in a circle such that no element is equal to the the arithmetic mean of its 2 neighbours.
*/

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
		ll n; cin>>n; 
		vi v(2*n);//create vector array of 2*n elements
		rep{ 
		cin>>v[i];
	}
	sort(v.begin(),v.end());
 //hint: split an array into two halfs:
//1st array contain first n small elements
//2nd array contains n+1 to 2*n elements
	for(int i=0;i<n;i++){
	cout<<v[i]<<" "<<v[i+n]<<" ";
}
	cout<<"\n";
}
return 0;
}
