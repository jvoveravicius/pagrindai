#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>


/*

20. Duotas sveikuju skaiciu masyvas iš n elementu. 
Pakeiskite masyvo elementus vietoj ju irašydami skaiciaus turimu skaitmenu kieki. 
Jeigu masyvo elementas vienženklis skaicius, vietoj jo irašomas 1, jeigu masyvo elementas dviženklis, vietoj jo irašomas skaicius 2, ir t.t.  \
(Gabrielius Kalnikas)

*/


using namespace std;



void isvestiDuomenys(int pradiniai[], int kiekis){
	
	
	for (int i = 0; i<kiekis; i++){
		
		cout<<"Finaliniai rezultatai: "<<pradiniai[i]<<endl;
		
	}
	
	
}



int randomArrayValue(int n){
	
	int myArray[n], temp, x = 0;
	
	srand (time(NULL));
	
	for (int i = 0; i < n; i++){
		
		myArray[i] = rand();
		temp = myArray[i];
		cout<<"Array : "<<myArray[i]<<endl;
		
		
		do{
			
			temp = temp / 10;	
			x++;
			
		}while(temp>0);
		    
		myArray[i] = x;
		cout<<"After changes: "<<myArray[i]<<endl;
		x = 0;
		
	}
	
	
	isvestiDuomenys(myArray, n);

	
}




	

int paskaiciuojaKiekSkaiciu(int x){
	
	int amountOfValues = 0;

	
	do{
		
		x = x / 10;
		amountOfValues++;
		
	}while(x>0);
	
	
	return amountOfValues;
	
}



int sudedaVisusSkaicius(int x){
	
	int amountOfValues = 0, temp = 0;

	
	do{
		
		temp += x % 10;
		x = x / 10;
		
	}while(x>0);
	
	return temp;
	
}



int calArray(int myArray[], int size){

	for (int i = 0; i<size;i++){
		
		cout<<myArray[i]<<endl;
		
		
	}
	
	//how to use: calArray(myArray, 2);

}



int main(int argc, char** argv) {

	randomArrayValue(10);
	
	system("pause");
    return EXIT_SUCCESS;
}
