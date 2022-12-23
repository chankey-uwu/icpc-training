#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> c;
    int n,k,actual=0,longest=0;
    cin >> n;
    while(n--){
        cin >> k;
        if(c.find(k) == c.end()){
            c[k] = 1;
            actual++;
        }else{
            if(actual > longest) longest = actual;
            c.clear();
            c[k] = 1;
            actual = 1;
        }
    }
    if(actual > longest) longest = actual;
    cout << longest << endl;
    return 0;
}
