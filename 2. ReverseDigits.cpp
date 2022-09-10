/*Reverse a number*/



#include <bits/stdc++.h>
using namespace std;


int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);



int n;
cin >> n;

int ans=0;
while(n){

	int temp = n%10;
	ans = ans*10 + temp;
	n /= 10;

}

cout << ans;



}