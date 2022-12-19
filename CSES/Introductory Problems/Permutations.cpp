#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n == 1) cout << "1" << endl;
	else if(n <= 3) cout << "NO SOLUTION" << endl;
	else if(n == 4) cout << "2 4 1 3" << endl;
	else{
		int even_aux = n, odd_aux = n - 1;
		vector<int> perm(n);
		int half = n/2;
		if(n % 2 == 1){
			half++;
			even_aux--;
			odd_aux++;
		}
		for(int i = 0; i < n/2; i++){
			perm[i] = even_aux;
			even_aux -= 2;
		}
		for(int i = n/2; i < n; i++){
			perm[i] = odd_aux;
			odd_aux -= 2;
		}
		for(int i = 0; i < n; i++) cout << perm[i] << " ";
	}
	return 0;
}