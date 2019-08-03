#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i,j,c;
	long int p_factor;
    const long long int num = 600851475143;

	for(i = 1; i <= num/2; i++)
	{
		if(num % i == 0)
		{
			for(j = 2; j <= sqrt(i); j++)
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
