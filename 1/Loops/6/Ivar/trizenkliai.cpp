#include <iostream>
#include <cstdlib>
# include <cmath>
using namespace std;


//6. Raskite triženklius skaicius iš nurodyto intervalo [a ; b] , kuriu skaitmenu suma yra dviženklis skaicius.

void checkIf3Symbols(int enteredValue);
int calculationAllPossibleValues(int calcValue);


void checkIf3Symbols(int enteredValue){
	
	int tempValue = enteredValue, z = 0;
	

	
	do{
		
		z++;
		tempValue = tempValue / 10;
		
	} while (tempValue > 0);
	
	
	
	if (z>2 && z<4){
		cout<<"Your value "<<enteredValue<<" contains "<<z<<" symbols."<<endl
		;
	}
	else
	{
		cout<<"Your value "<<enteredValue<<" contain(s) "<<z<<" symbols."<<" However it must have only 3 symbols to proceed operation."<<endl;
		cout<<"Application was stopped"<<endl;
		exit(0);
	}	
	
}




int calculationAllPossibleValues(int calcValue){
	
	
	int temValue = 0;

	while(calcValue>0){
		
		temValue += calcValue%10;
		calcValue =  calcValue / 10;
		
	}
	
	return temValue;
	
}



int main(int argc, char** argv) {
	
	int a, b, temp;
	
	cout<<"Enter first value which contains 3 symbols: "<<endl;
	cin>>a;
	
	calculationAllPossibleValues(a);

	
	checkIf3Symbols(a);
	
	cout<<"Enter second value which contains 3 symbols"<<endl;
	cin>>b;
	checkIf3Symbols(b);
	
	cout<<"Calculating..."<<endl;
	
	temp = a + b;
	cout<<"Value "<<a<<" and value "<<b<<" sum is "<<temp<<endl;
	cout<<"Result: "<<calculationAllPossibleValues(temp)<<endl;
	
	system("pause");
	return EXIT_SUCCESS;
}
