#include <iostream>
using namespace std;

int main()
{
	int first = 1, second = 1;
	int n = 1, sum = 0;
	while(n < 4000000)
	{
		first = second;
		second = n;
		n = first + second;
		
		if(n % 2 == 0)
			sum += n;
		
	}
	
	cout<<"The required sum is: "<<sum;
	
	
return 0;	
}
