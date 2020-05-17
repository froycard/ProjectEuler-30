#include<iostream>

using namespace std;

bool powers(unsigned n)
{
	unsigned tmp = n;
	unsigned sum = 0;
	while(tmp)
	{
		sum+=pow(tmp%10,5);
		tmp/=10;
	}
	if(sum == n) return true;
	return false;
}

int main()
{
	unsigned sum = 0;
	for(auto i=1001;i<200000;++i)
		if(powers(i)){
			sum+=i;
			cout << i << endl;
		}
	cout << "Sol: " << sum << endl;
	return 0;
}

