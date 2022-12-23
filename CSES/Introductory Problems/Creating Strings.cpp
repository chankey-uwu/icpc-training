#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> c;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(c.find(s[i]) == c.end()){
            c[s[i]] = 1;
        }else{
            c[s[i]]++;
        }
    }
    
    return 0;
}