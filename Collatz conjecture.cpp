#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
class Collatz
{

public:
	void solve()
	{
		for (long long int x = 2; x < 10; x++)
		{
			long long y;
			y = x;
			do
			{
				if (y % 2 == 0)
				{
					do
					{
						cout << y << " ";
						y /= 2;
					} while (y % 2 == 0);
				}
				else
				{
					cout << y << " ";
					y = (y*3) + 1;
				}
			} while (y != 1);
			cout << y << endl;
			cout << "Not solveable" << endl;
			system("pause");
			system("CLS");
		}

	}
};
int main()
{
	Collatz C;
	C.solve();
	system("pause");
	return 0;
}