#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int max_r(ll t[5], ll res, ll ip){
	ll max_res = res;
	ll temp;
	int pos = -1;
	for(int i = 0; i < 5; i++){
		temp = res / t[i] * ip;
		if(temp > max_res){
			max_res = temp;
			pos = i;
		}
	}
	return pos;
}

int main(){
	int t, p;
	ll n, ip, zero;
	zero = 0;
	cin >> t;
	while(t--){
		ll res = 1;
		cin >> n;
		ll best[5];
		for(int i = 0; i < n; i++){
			cin >> ip;
			if(i < 5 && ip != 0){
				best[i] = ip;
				res *= best[i];
			}else if(ip != 0){
				p = max_r(best, res, ip);
				if(p >= 0){
					res = res / best[p] * ip;
					best[p] = ip;
				}
			}else{
				zero++;
			}
		}
		if((n - zero) < 5) cout << 0 << endl;
		else if(res < 0) cout << 0 << endl;
		else cout << res << endl;
	}
	return 0;
}