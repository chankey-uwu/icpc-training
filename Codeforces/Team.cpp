#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, implemented = 0;
    int p,v,t;
    cin >> n;
    while(n--){
        cin >> p >> v >> t;
        if(p+v+t > 1) implemented++;
    }
    cout << implemented << endl;
    return 0;
}