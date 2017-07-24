#include <cstdlib>
#include <iostream>
#include <iomanip>


#define PI 32

using namespace std;
bool rask(int x[], int n, int s);


int test(){
	
	int a[20], n = 20, b=10;
	
	
	for (int i = 0; i < n; i++)
	{ 
		a[i] = n + 1 - i;
		cout << setw(5) << a[i];
	} 
	cout << endl;
	
	//kreipinys i funkcija ... 
	cout << rask(a, n, b);
	
}



int main()
{

	test();
	system("PAUSE");
	return EXIT_SUCCESS;
}



//funkcija rask
bool rask(int x[], int n, int s)
{
bool yra = false;
for (int i = 0; i < n; i++)
if (x[i] == s)
yra = true;
return yra;
}
