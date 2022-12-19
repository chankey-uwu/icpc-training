#include <bits/stdc++.h>
using namespace std;

int distinctNumbers(int n){
	long long int sol[n];
	long long x;
	int v;
	int l = 1;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(i == 0) sol[0] == x;
		v = 0;
		for(int j = 0; j < l; j++){
			if(x != sol[j]){
				v++;
			}
		}
		if(v == l){
			sol[v] = x;
			l++;
		}
	}
	return l;
}

int main(){
	int n; 
	cin >> n;
	cout << distinctNumbers(n);
	return 0;
}