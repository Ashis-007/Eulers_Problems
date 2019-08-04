#include <iostream>
using namespace std;

int LCM(int a, int b)
{
  int lcm;

  for(lcm = min(a,b) ; lcm <= a * b; lcm++)
      {
        if(lcm % a == 0 && lcm % b == 0)
          return lcm;
      }

}


int main()
{

	int num = 1;

	for(int i = 2; i <= 20; i++)
    {
        num = LCM(num, i);
    }

	cout<<"The lcm is: "<<num;

return 0;
}
