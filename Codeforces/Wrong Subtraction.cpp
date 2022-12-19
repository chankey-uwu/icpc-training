#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,m;
	cin >> n >> k;
	while(k--){
		m = n % 10;
		if(m == 0) n /= 10;
		else n--;
	}
	cout << n << endl;
	return 0;
}