#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n = 100, sum = 0;
	int square_sum = 0, sum_square = 0;
	int diff;

	square_sum = n * (n + 1) * ((2*n) + 1)/6;
	sum = n * (n + 1)/2;
	sum_square = pow(sum, 2);
	diff = sum_square - square_sum;

	cout<<"The difference is: "<<diff;


return 0;
}
