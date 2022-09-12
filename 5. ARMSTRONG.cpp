/*ARMSTRONG NUMBER*/



#include <bits/stdc++.h>
using namespace std;


int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);


int n;
cin >> n;
int on = n;

int tn = n;
int count = 0;
while(tn)
{
	count++;
	tn /= 10;
}

int ans = 0;
//cout << count;
while(n)
{
	int temp = n %10;
	//cout << temp;
	ans = ans + ceil(pow(temp, count));
	n /= 10;
}

cout << ans;

if(ans == on)
{
	cout << "YES";
}
else
{
	cout << "NO";
}




}