//codeforces:1547A - Shortest Path with Obstacle

//Let's suppose that the forbidden cell does not affect the shortest path.
// In that case, the answer would be |xA-xB|+|yA-yB|.

//The forbidden cell blocks the shortest path if and only if it belongs to every shortest path.
// In other words, if there is only one shortest path and the forbidden cell belongs to it.
// So, the answer differs from |xA-xB|+|yA-yB| iff A and B are in one row or column and F is between them.
// In that case, the answer is |xA-xB|+|yA-yB|+2 (i.e. greater by 2).

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
#define rep for(int i=1;i<=n;i++)
#define re for(int j=m-1;j>=0;j--)
using namespace std;

int main(){
	lli t,n; cin>>t;
	while(t--){
		lli xa,ya,xb,yb,xf,yf;
		cin>>xa>>ya;
		cin>>xb>>yb;
		cin>>xf>>yf;
		lli ans=abs(xa-xb)+abs(ya-yb);
		if ((xa==xb && xb==xf && min(ya,yb) < yf && yf < max(ya, yb))
        || (ya == yb && ya == yf && min(xa,xb) < xf && xf < max(xa,xb)))
		ans=ans+2;
		cout<<ans<<endl;
	}
	return 0;
}
