/*Print all divisors*/



#include <bits/stdc++.h>
using namespace std;


int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);


int n;
cin >> n;

for(int i = 1; i <= sqrt(n); ++i)
{
	if(n % i == 0){
		cout << i << " ";
		int qo = n / i;
		if(qo != i)
		{
			cout << qo << " ";
		}
	}
}


}