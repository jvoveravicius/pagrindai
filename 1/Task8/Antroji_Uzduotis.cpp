#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <math.h> 

using namespace std;


int convertToThousands(double);


int convertToThousands(double enterValue){
	
	
	int finalResult, roundedValue;
	
	roundedValue = rint(enterValue);	
	
	finalResult = roundedValue * 1000;
	
	return finalResult;
	
	
}




int main()
{
	
	
	double enteredValue;
	
	
	
	do{
	
		
		
		cout<<"Iveskite skaiciu: "<<endl;
		cin>>enteredValue;
		
		if (enteredValue>0){
			
			cout<<"Jus ivedete "<<enteredValue<<" tukst."<<endl;
			cout<<"Rezultatas: "<<convertToThousands(enteredValue)<<endl;
			
		}
		else{
			
			cout<<"Buvo ivestas: "<<enteredValue<<" . Programa nutraukia darba."<<endl;
			
		}

		
	}while (enteredValue!=0);
	
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

