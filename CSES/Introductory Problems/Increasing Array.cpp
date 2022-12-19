#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long movs = 0;
	cin >> n;
	vector<int> X(n);
	for(int i = 0; i < n; i++) cin >> X[i];
	for(int i = 1; i < n; i++){
		while(X[i] < X[i-1]){
			X[i]++;
			movs++;
		}
	}
	cout << movs << endl;
	return 0;
}