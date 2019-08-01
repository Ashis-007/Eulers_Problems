#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	int num = 1;
	int rem = 0;
	
	for(int i = 1; i <= 20; i++)
	{
		rem = num % i;
		if(rem != 0)
		{
			++num;
			i = 1;
			continue;
		}
		
		else if(i == 20)
			break;
	}
	
	cout<<num;
	
return 0;	
}
