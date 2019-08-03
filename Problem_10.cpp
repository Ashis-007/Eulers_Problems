#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i, j, rem, p_num, c;
	unsigned long long int sum = 0;

	for(i = 4; i < 2000000; i++)
	{

		for(j = 2; j <= sqrt(i); j++)
		{
			rem = i % j;

			if(rem == 0)
			{
				c = 0;
				j = 2;
				break;
			}

			else
				c = 1;
		}

		if(c == 1)
		{
			p_num = i;
			sum += i;
		}
	}

	cout<<"The required sum is: "<<(sum+5);


return 0;
}
