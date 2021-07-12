// CODEFORCES : 1547C - Pair Programming
// Let's create two pointers i and j in arrays a and b — index of possible action of Monocarp and Polycarp
// and c — the current length of the file.
//Suppose that ai=0 or bj=0 on current iteration.
// Then we take the appropriate zero element and increase c by one.
// We can do that because appending a new line cannot make a new answer prefix incorrect,
// if the previous prefix was correct.
//Suppose that ai?0 and bj?0.
// If ai>c and bj>c then there is no answer because we can potentially do only two actions and both make the answer incorrect.
// If one number is greater than c and the other is less than or equals then we take the one that less than or equals c.

//If one of the sequences a or b ends then only one potential action needs to be checked at each iteration.

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
#define vll vector<long long>
#define all(x) (x).rbegin(),(x).rend()
#define rep for(int i=0;i<n;i++)
#define re for(int j=m-1;j>=0;j--)
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
	int k,n,m;
	cin>>k>>n>>m;
	vi a(n); vi b(m);  vi res(n+m);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	int p1=0,p2=0;
	bool ok = true; 
	while(p1!=n || p2!=m){
		if(p1!=n && a[p1]==0){
		res.push_back(0); k++;p1++;
	}
	else if(p2!=m && b[p2]==0){
		res.push_back(0);k++;p2++;
	}
	else if(p1!=n && a[p1]<=k)  res.push_back(a[p1++]);
	else if(p2!=m && b[p2]<=k)  res.push_back(b[p2++]);
	else{
		cout<<"-1"<<endl;
		ok=false; break;
	}
}
   res.erase(res.begin()+0,res.begin()+(n+m));
	if(ok){
		for(int i=0;i<res.size();i++){
		//	res.erase(res.begin()+0,res.begin()+(n+m-1));
		cout<<res[i]<<" ";
	}
		cout<<endl;
	}
}
	return 0;
}
