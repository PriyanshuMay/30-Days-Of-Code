/*
Author : priyanshumay
Problem: B
Contest: 1392
Platform: Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll N,i,test;

void solve(){

    cin >>N;
 	vector<ll> arr(N);
 	set<ll> ar;
 	for ( i =0; i< N; i++)
    {
 		cin >> arr[i];
 		ar.insert(arr[i]);
 	}
 	if(ar.size() != 1) 
    {
       cout << 1 << "\n";
 	} 
     else
    {
 		cout << N << "\n";
 	}

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (cin >> test; test--;)
    {
     solve();
    }
}
