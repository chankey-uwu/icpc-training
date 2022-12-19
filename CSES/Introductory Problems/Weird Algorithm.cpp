#include <iostream>
 
using namespace std;
 
void weirdAlgorithm(long long n){
	if(n == 1){
		cout << n;
		return;
	}else if(n % 2 == 0){
		cout << n << " ";
		n = (n / 2);
		weirdAlgorithm(n);
	}else if(n % 2 == 1){
		cout << n << " ";
		n = 3 * n + 1;
		weirdAlgorithm(n);
	}
}
 
int main(){
	long long n;
	cin >> n;
	weirdAlgorithm(n);
	return 0;
}