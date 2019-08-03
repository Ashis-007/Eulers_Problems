#include <iostream>
using namespace std;

int main()
{

	int num = 1;
	int rem = 0;

	for(int i = 1; i <= 20; i++)
	{
		if(i == 20)
			break;

		rem = num % i;

        if(rem != 0)
		{
			++num;
			i = 1;
			continue;
		}

    }

	cout<<"The lcm is: "<<num;

return 0;
}
