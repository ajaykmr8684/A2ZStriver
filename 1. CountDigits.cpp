/* Counts digits*/



#include <bits/stdc++.h>
using namespace std;




int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);


//There are 3 ways to count the digits
/*
1. n/10 ---> count++
2. to_string(n) ---> length()
3. log base 10 --> floor(value)

*/

int n;
cin >> n;

cout << floor(log10(n) + 1);

}