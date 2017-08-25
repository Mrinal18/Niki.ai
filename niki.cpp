#include<bits/stdc++.h>
using namespace std;
const long modu = 1000000007;

long long int calculateSum(long long int n)
{
	if (n <= 0)
	return 0;

	long long int fibo[n+1];
	fibo[0] = 0, fibo[1] = 1;


	long long int sum = fibo[0] + fibo[1];


	for (long long int i=2; i<=n; i++)
	{
		fibo[i] = fibo[i-1]+fibo[i-2];
		sum += fibo[i];
	}

	return (sum + 1) % modu;
}


int main()
{
    long long int t;
    cin >> t;
    while(t--){
	long long int n;
	cin >> n;
	cout << calculateSum(n) << endl;
	return 0;
    }
}
