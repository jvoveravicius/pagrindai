#include <iostream>
#include <cstdlib>
# include <cmath>
using namespace std;


//6. Raskite triženklius skaicius iš nurodyto intervalo [a ; b] , kuriu skaitmenu suma yra dviženklis skaicius.





int main(int argc, char** argv) {
	
	int tempValue = 0, finalValue  = 0,  z, a, b, g;
	bool switchValue;
	
	cout<<"Iveskite pradzios skaiciu: "<<endl;
	cin>>a;
	cout<<"Iveskite pabaigos skaiciu: "<<endl;
	cin>>b;
	
	for (int i=a; i < b; i++){
		
		z = i;

		do{	
	
			tempValue+=z%10;
			z = z / 10;

		}while(z>0);
		
		
		
		finalValue = tempValue;
		
		
		do{
			
			g++;
			tempValue =  tempValue / 10;
			
		}while(tempValue>0);
		
		
		
		if (g<3){
			
			cout<<"Skaicius: "<<i<<endl;
			cout<<finalValue<<endl;			
		}
	
		tempValue = 0;
		g = 0;
	
	}
	
	system("pause");
	return EXIT_SUCCESS;
}
