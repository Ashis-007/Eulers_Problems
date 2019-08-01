#include <iostream>
using namespace std;

int reverse(int num)
{
	int digit, rev = 0;
	
	while(num != 0)
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num /= 10;
	}
	
	return rev;
}


int main()
{
	int num1, num2, product;
	int rev = 0;
	int n, l_palin = 0;
	
	for(num1 = 100; num1 < 1000; num1++)
	{
		for(num2 = 100; num2 < 1000; num2++)
		{
			product = num1 * num2;
			n = product;
			
			rev = reverse(product);
			
			if(rev == n && rev > l_palin)
			{
				l_palin = rev;
				cout<<num1<<"*"<<num2<<" = "<<l_palin;
				cout<<endl;
			}
			
		}
	}
	
	
	
return 0;	
}
