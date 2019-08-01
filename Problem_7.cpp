#include <iostream>
using namespace std;

int main()
{
	int i, j, rem, p_num, c;
	int count = 2;
	
	for(i = 2; i < 1000000; i++)
	{
		if(count == 10001)
			break;
		
		for(j = 2; j <= i/2; j++)
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
			++count;
			p_num = i;
		}
	}
	
	
	
	cout<<"10001st prime number is: "<<p_num;
	
	
return 0;	
}
