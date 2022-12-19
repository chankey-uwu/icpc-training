#include <bits/stdc++.h>
using namespace std;

int main(){
    int moves = 0;
    vector<vector<int>> M(5,vector<int> (5));
    pair<int,int> pos, center = make_pair(2,2);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> M[i][j];
            if(M[i][j] == 1) pos = make_pair(i,j); 
        }
    }
    while(pos != center){
        if(pos.first > center.first){
            pos.first--;
            moves++;
        }else if(pos.first < center.first){
            pos.first++;
            moves++;
        }
        if(pos.second > center.second){
            pos.second--;
            moves++;
        }else if(pos.second < center.second){
            pos.second++;
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}