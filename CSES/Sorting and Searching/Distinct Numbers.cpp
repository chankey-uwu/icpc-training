#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int, int> c;
	int n,x,count = 0; 
	cin >> n;
	while(n--){
		cin >> x;
		if(c.find(x) == c.end()){
            c[x] = 1;
			count++;
        }
	}
	cout << count << endl;
	return 0;
}