#include <bits/stdc++.h>
using namespace std;

void valle(int n){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
    int flagUp = 0;
    int a, last = 0;   
    while(n--){
        cin >> a;
        if(last != 0){
            if(a < last && flagUp == true){
                cout << "NO" << endl;
                while(n--){
                	cin >> a;
                }
                return;
            }else if(a > last && flagUp == false){
                last = a;
                flagUp = true;
            }else{
                last = a;
            }
        }else{
            last = a;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        valle(n);
    }
    return 0;
}