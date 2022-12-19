#include <bits/stdc++.h>

using namespace std;

long long missingNumber(long long n){
	long long x;
	long long real_sum = (n * (n + 1))/2;
	long long sum = 0;
	for(int i = 1; i < n; i++){
		cin >> x;
		sum = sum + x;
	}
	return (real_sum - sum);
}

int main(){
	long long n;
	cin >> n;
	cout << missingNumber(n);
	return 0;
}