#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int base,n,k,a,c = 0,i = 1;
    bool flag = true;
    cin >> n >> k;
    while(flag){
        if(i > n){
            cout << c << endl;
            exit(0);
        }
        cin >> a;
        if(a > 0){
            if(i == k){
                base = a;
                c++;
            }else if(i < k){
                c++;
            }else if(a == base){
                c++;
            }else{
                flag = false;
            }
        }else{
            flag = false;
        }
        i++;
    }
    cout << c << endl;
    return 0;
}