#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


bool rask(int x[], int n, int s);




int main()
{
	
int e = -10; 
int mas[19];


	for (int i = 0; i<=100; i++){
		
		cout<<i<<endl;
		
		if (i == 2) continue;
	}
	
	
	cout << "e = " << e<<endl;

		
	

		system("PAUSE");
		return EXIT_SUCCESS;
	}



//funkcija rask
bool rask(int x[], int n, int s)
{

bool yra = false;

for (int i = 0; i < n; i++){
	
//	cout<<i<<endl;

//cout<<s<<endl;
cout<<x[i]<<endl;
	
	if (x[i] == s){
		
		
		
		yra = true;
		
	}	
	
}



return yra;
}
