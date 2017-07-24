#include <iostream>
#include<cstdlib>
using namespace std;

//Užduotis: Duoti trys skirtingi skaiciai a, b, c. Mažiausia sukeiskite vietomis su didžiausiu.





int main() {
	
	int i, z, h;
	
	z = 0;
	double enteredValues[3];
	double setMaxValues[3];
	double setMinValue[3];
	double maxValue, minValue;
	string enterValueNumber[] = {"first: ", "second: ","third: "};
	string enterValueText = "Enter value ";
	
	
	
	do{
		
		z++;
		
		//cout<<z<<endl<<endl;
		
		
		for (i=0; i<3; i++){
			
			if (z==1){
			
				cout<<enterValueText<<enterValueNumber[i]<<endl<<endl;
				cin>>enteredValues[i];
			
			}
			
			else{
				
					if (enteredValues[0]>enteredValues[1]&&enteredValues[0]>enteredValues[2]){
						maxValue=enteredValues[0];
					}
					else if (enteredValues[0]<enteredValues[1]&&enteredValues[1]>enteredValues[2]){
						maxValue=enteredValues[1];
					}
					else if (enteredValues[0]<enteredValues[2]&&enteredValues[1]<enteredValues[2]){
						maxValue=enteredValues[2];
					}
					
					
					
					if (enteredValues[0]<enteredValues[1]&&enteredValues[0]<enteredValues[2]){
						minValue=enteredValues[0];
					}
					else if (enteredValues[0]>enteredValues[1]&&enteredValues[1]<enteredValues[2]){
						minValue=enteredValues[1];
					}
					else if (enteredValues[0]>enteredValues[2]&&enteredValues[1]>enteredValues[2]){
						minValue=enteredValues[2];
					}
				
				
			}
			
				
		}	
		
		
			
			
	}while( z<2);	
	
	
	
	cout<<endl<<endl<<maxValue<<endl<<endl;
	cout<<minValue<<endl<<endl;
	
	
	
	

	system("pause");
    return EXIT_SUCCESS;
}
