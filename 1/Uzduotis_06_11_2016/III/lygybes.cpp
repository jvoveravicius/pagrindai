#include <iostream>
#include<cstdlib>
using namespace std;


/*
Užduotis:
Duoti keturi sveikieji skaiciai, trys iš ju vienodi, o vienas kitoks. Parašykite programa, kuri nustato, kelintas iš ivestu skaiciu buvo kitoks.
*/

int	IntegersValues[4];


int loop(bool CheckIfEqual){
	
int i, z, h, NotEqualValue, NotEqualRow;
z = 0;

string mainMsg[] = {"Iveskite sveikaji skaiciu: ", "Ivestas sveikasis skaicius: ","Rezultatas yra: "};
int IntegersValuesSize = sizeof(IntegersValues)/sizeof(IntegersValues[0]);




if (CheckIfEqual == false){
	
	for (int i = 0; i < IntegersValuesSize; i++){
	
	cout<<mainMsg[0]<<endl;
	cin>>IntegersValues[i];
	cout<<mainMsg[1]<<IntegersValues[i]<<endl<<endl<<endl;
	
	}
	
}
	
else{
	
	
	for (int h = 1; h < IntegersValuesSize; h++){
		
	
		if (IntegersValues[0]==IntegersValues[h]){
			
			cout<<"Skaicius: "<<IntegersValues[0]<<" yra lygus skaiciui "<<IntegersValues[h]<<endl;
			
		}
		
		else{
		
			z++;
			
			cout<<z<<endl;
			
			if (z==1){
				
				cout<<"Skaicius: "<<IntegersValues[0]<<" yra nelygus skaiciui "<<IntegersValues[h]<<endl;
				NotEqualValue = IntegersValues[h];
				NotEqualRow = h+1;
				
				
			}
			else if (z>1){
				
				cout<<"Skaicius: "<<IntegersValues[0]<<" yra nelygus skaiciui "<<IntegersValues[h]<<endl;
				NotEqualValue = IntegersValues[0];
				NotEqualRow = 1;
			}
		
			
			
		} 
			
		
	}
	
	cout<<"Nesutampantis skaicius yra: "<<NotEqualValue<<" kuris eina is eiles "<<NotEqualRow<<" numeriu."<<endl;
	
	
}



	
}
		



int main() {
	
	loop(false);
	loop(true);
	
	system("pause");
    return EXIT_SUCCESS;
}
