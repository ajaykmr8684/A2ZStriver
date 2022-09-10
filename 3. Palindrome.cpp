/*Palindrome*/



#include <bits/stdc++.h>
using namespace std;


int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);



int n;
cin >> n;

int m = n;

int computedValue = 0;

while(m){
	int temp = m % 10;
	computedValue = computedValue*10 + temp;
	m /=10;
}

if(computedValue == n){
	cout << "Palindrome";
}
else
{
	cout << "Not a Palindrome";
}


}