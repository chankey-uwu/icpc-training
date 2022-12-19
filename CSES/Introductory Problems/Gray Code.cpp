#include <bits/stdc++.h>
using namespace std;

void change(int &n){
    n = 1 - n;
}

void printSolution(vector<int> x, int n){
    for(int i = 0; i < n; i++) cout << x[i];
    cout << endl;
}

void gray_code(vector<int> x, int n, int pos){
    if(n == pos) printSolution(x,n);
    else{
        if(pos == 0){
            gray_code(x,n,pos);
        }
    }
}

int main(){
    int n;
    vector<int> x(n,0);
    gray_code(x,n,0);


    return 0;
}