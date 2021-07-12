//CODEFORCES : 1547B - Alphabetical Strings

// For a start, let's find the position of the letter 'a' in string s.
// If this position does not exist, then the answer would be 'NO'.
// Suppose that this position exists and equals pos_of_a.
// Let's create two pointers L and R. Initially L:=pos_of_a, R:=L.
// We will try to build string s using the algorithm from the statement.
// Suppose that we have built substring s[L..R] in i iterations.
// Consider the next letter of the Latin alphabet 'a.+i Let's look at cases:

//find position pos of the letter 'a'+1 in s (if it does not exist then 'NO');
//if pos=L-1 then make an assignment L:=L-1 and process the next letter ci;
//if pos=R+1 then make an assignment R:=R+1 and process the next letter ci;
//otherwise string s is not alphabetical and the answer is 'NO'.
//So, if we have built the string in n iteration, then string s is alphabetical and the answer is 'YES'.

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
	lli t; cin>>t;
	while(t--){
		string s; cin>>s;
		size_t l=s.find('a');
		if(l==string::npos){
			cout<<"NO"<<endl;
			continue;
		}
		size_t n=s.length() , r=l;
		bool yes = true;
		for(size_t i=1;i<n;i++){
		size_t pos = s.find(char('a'+i));
		if(pos==string::npos || (pos!=l-1 && pos!=r+1)){
			yes = false;
			break;
		}
		else{
			l=min(l,pos); r=max(r,pos);
		}
		}
		cout<<(yes? "YES" : "NO")<<endl;
	}
	return 0;
}
