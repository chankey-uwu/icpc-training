#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int min_num(int c1, int c2, int c3, int c4){
	int min = c1;
	if(min > c2) min = c2;
	if(min > c3) min = c3;
	if(min > c4) min = c4;
	return min;
}

int disp_part(ull cur_x, ull cur_y, int n, ull x, ull y, int mov){
	
	if((x == cur_x) && (y = cur_y)) return mov;
	else{
		if((x < cur_x) && (y < cur_y)) return disp_part(cur_x/2,cur_y/2,n,x,y,mov++);
		else if((x >= cur_x) && (y <= cur_y)) return disp_part((cur_x + pow(2,n))/2,cur_y/2,n,x,y,mov++);
		else if((x <= cur_x) && (y >= cur_y)) return disp_part(cur_x/2,(cur_x + pow(2,n))/2,n,x,y,mov++);
		else return disp_part((cur_x + pow(2,n))/2,(cur_x + pow(2,n))/2,n,x,y,mov++);
	}
	
}
int main(){
	int n;
	ull x, y;
	cin >> n >> x >> y;
	cout << disp_part(pow(2,n-1),pow(2,n-1),n,x,y,0);
	return 0;
}