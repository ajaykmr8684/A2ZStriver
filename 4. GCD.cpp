/*GCD*/



#include <bits/stdc++.h>
using namespace std;


int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

int num1 = 36;
int num2 = 24;

while(num1 % num2 != 0){
	int rem = num1 % num2;
	num1 = num2;
	num2 = rem;

}

cout << num2;


}