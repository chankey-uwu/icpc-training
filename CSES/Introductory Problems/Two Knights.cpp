#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
	int n;
	ull res = 0, prev = 0;
	cin >> n;
	for(int k = 1; k <= n; k++){
		if(k == 1) cout << res << endl;
		else if(k == 2) cout << 6 << endl;
		else{
			prev += 8*(k-2);
			res = ((((k*k)*(k*k-1))/2) - prev);
			cout << res << endl;
		} 
	}
	return 0;
}