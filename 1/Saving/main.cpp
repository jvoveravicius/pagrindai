#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;


/*

Duotas sveikuju skaiciu masyvas, kurio elementai nuskaitomi iš tekstinio failo. Raskite didžiausia greta esanciu nuliu skaiciu. (Svetovas Povilas)

*/

//Algoritmas
//1. Iraso i file
//2. Paima is file
//3. Nustato kuris yra 0 ir suraso atitinkamaus file i masyva
//4. Palygina ir nustato, kuris is int yra didesnis


void creatingAndSavingRandomValues(int z, string fileName){
	
	
	
	srand (time(NULL));
	fileName = fileName+".txt";
	
	ofstream f(fileName.c_str());
	 
	cout<<"Creating file..."<<endl;
	
	for (int i=1; i<z + 1; i++){
		
	
		f<<rand()%10<<" ";
		
		//f<<rand()%100;
		
		
		if (i%5 == 0){
			
			f<<endl;
		}	
		
	}	

	f.close();
	
	cout<<"File was successfully created. It contains "<<z<<" integers."<<endl;
		
}




int readFromFile(int value, int amount, string fileName){
	
//	cout<<"Reading from file"<<endl;
	
	int z[amount];
	int i = 0;
	
	fileName = fileName+".txt";
	ifstream f(fileName.c_str());


	while (!f.eof()){
		i++;
		f>>z[i-1];
	}

	
	f.close();
	
	value = z[value];
	
	return value;
	

}




int checkWithLarger(int amount, string fileName){
	
	cout<<"Checking file.."<<endl;
			
	int	IntegersValues[amount]; //= {300, 99, 1, 9999,1, 1, 12, 69, 12, 1};
	int IntegersValueTemp[amount];
	int IntegersValuesSize; // = (sizeof(IntegersValues)/sizeof(IntegersValues[0]));
	int finalValue = 0;
	int IntegersValues_counter_2x = 0;
	int IntegersValue_counter = 0;
	
	bool enterNextStep = false;
	
	
	
	for (int d = 0; d<2; d++){
		
		cout<<"D Value is "<<d<<endl;
		
		if (enterNextStep == false){
			
			cout<<"entered here"<<endl;
			
			for (int f = 0; f< amount; f++){
				
			IntegersValueTemp[f] = readFromFile(f, amount,  fileName);
			cout<<IntegersValueTemp[f]<<endl;
	
  		 	}
			
		enterNextStep = true;
			
		}
		else {
			
			cout<<"Entered false"<<endl;
			
			for (int n = 0; n< amount; n++){
				
				
				cout<<"Skaicius: "<<n<<endl;
				
				
				if (IntegersValueTemp[n] == 0 ){
					
					if (n > 0 || n < amount - 1){		
						
						
						IntegersValues[IntegersValues_counter_2x] = IntegersValueTemp[n - 1];
						cout<<"SK0: "<<IntegersValues[IntegersValues_counter_2x]<<endl;
						
						IntegersValues[IntegersValues_counter_2x + 1] = IntegersValueTemp[n + 1];
						cout<<"Sk1: "<<IntegersValues[IntegersValues_counter_2x + 1]<<endl;
						cout<<"First"<<endl;
						
					
						
					}
					
					else{
						
						cout<<"ELSE"<<endl;
						IntegersValues[IntegersValues_counter_2x] = 0;
						cout<<"SK0: "<<IntegersValues[IntegersValues_counter_2x]<<endl;
						
						IntegersValues[IntegersValues_counter_2x + 1] = 0;
						cout<<"Integeris: "<<IntegersValues_counter_2x + 1<<endl;
						cout<<"Sk1: "<<IntegersValues[IntegersValues_counter_2x + 1]<<endl;
						
					}
					
					
					
					IntegersValues_counter_2x = IntegersValues_counter_2x + 2;
					IntegersValue_counter++;
					
					
				}

				
				
			}
			
			
			
			
		}	 
		
	}
	
	

		
	IntegersValuesSize = IntegersValue_counter;
	
	cout<<"My integer size is: "<<IntegersValuesSize<<endl;
	
	
	for (int i = 0; i<IntegersValuesSize - 1; i++){
		
		cout<<"I reiksme: "<<i<<endl;
		
		for (int z = i + 1; z < IntegersValuesSize; z++){
			
			
			if (IntegersValues[i]>IntegersValues[z]){
				
				
				
				if (IntegersValues[i] > finalValue){
					
					cout<<IntegersValues[i]<<" > "<<IntegersValues[z]<<endl;
					finalValue = IntegersValues[i];
					
				}
						
				
			}
			
			
			else{
				
				
				if (IntegersValues[IntegersValuesSize - 1] > finalValue){
					
					finalValue = IntegersValues[IntegersValuesSize - 1];
					
				}
				
				else{
					
					cout<<IntegersValues[i]<<" < "<<IntegersValues[z]<<endl;
					
				}
				
				
				cout<<"Loop was breaked."<<endl;
				break;
				
			}
			
			
		}
		
		
	}
	
	
	
	cout<<"Final Value: "<<finalValue<<endl;
		
	
	
}





int main(int argc, char *argv[])
{
	
	
	string fileName = "100";
	int amountOfRandomValues = 10;
	
	/*

	string fileName;
	int amountOfRandomValues;
	
	cout<<"Enter file name: "<<endl;
	cin>>fileName;
	
	
	cout<<"Enter amount of random integers in "<<fileName<<".txt"<<endl;
	cin>>amountOfRandomValues;
    int	returnedAmountOfValues[amountOfRandomValues];
	creatingAndSavingRandomValues(amountOfRandomValues, fileName);
	*/
	
	checkWithLarger(amountOfRandomValues, fileName);
	
	
   	    
    
    system("pause");
    return EXIT_SUCCESS;
}
