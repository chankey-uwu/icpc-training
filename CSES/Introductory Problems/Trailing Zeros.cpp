#include <bits/stdc++.h>
using namespace std;

int zeros(int x){
	int new_zeros = 0;
	while(x % 5 == 0){
		x /= 5;
		new_zeros++;
	}
	return new_zeros;
}

int main(){
	int n,f = 5,ceros = 0;
	cin >> n;
	while(f <= n){
		ceros += zeros(f);
		f += 5;
	}
	cout << ceros << endl;
	return 0;
}