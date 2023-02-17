#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll> se;

int main(){
	for(ll i = 1; i * i <= 1000000000; i++){
		se.insert(i * i);
	}
	for(ll i = 1; i * i * i <= 1000000000; i++){
		se.insert(i * i * i);
	}
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int ans = 0;
		for(auto i : se){
			if(n >= i){
				ans++;
			}else{
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}