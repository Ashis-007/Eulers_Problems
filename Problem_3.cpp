#include <iostream>
using namespace std;

int main()
{
	int i,j,c;
	int p_factor;
	
	for(i = 1; i <= 600851475143/2; i++)
	{
		if(600851475143 % i == 0)
		{
			for(j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					c = 0;
					j = 2;
					break;
				}
				
				else
				{
					c = 1;
					continue;
				} 
					
			}
		if(c == 1)
			p_factor = i;
			
		}
	}
	
	cout<<"The largest prime factor is: "<<p_factor;
	
	
	
return 0;	
}
