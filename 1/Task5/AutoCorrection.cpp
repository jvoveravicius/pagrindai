#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>


using namespace std;


/*
Uzduotis:
8. Sugeneruokite du sveikuju skaiciu masyvus. turincius po n elementu. Nustatykite kiek kartu didžiausias pirmojo masyvo elementas kartojasi antrame masyve. (Nicajus Dominykas)


*/



void createAndSaveTextToFile(string fileName, string Content){
	
	fileName = fileName+".txt";
	srand (time(NULL));
	ofstream f(fileName.c_str());
	f<<Content;
	
}



int calculations(int amountOfIntegers){
	
	int firsArray[amountOfIntegers], secondArray[amountOfIntegers];
	int arrayAmount[amountOfIntegers], doCalculations = 0, tempResult = 0, result = 0;
	
	srand (time(NULL));
	

	
	
	do{
		
	
		for (int i=0; i<amountOfIntegers; i++){
			
			
			if (doCalculations == 0){
				
				firsArray[i]= rand()%10;
				cout<<"First: "<<firsArray[i]<<endl;
				
				
			}
			else{
				
				secondArray[i]= rand()%10;
				cout<<"Second: "<<secondArray[i]<<endl;
				
			}
	
		}
		
		
		doCalculations++;


	}while(doCalculations<2);
	
	
	
	cout<<"Amount is"<<amountOfIntegers<<endl;

	for (int g = 0; g<amountOfIntegers; g++){
		
		for (int d=g + 1; d < amountOfIntegers + 1; d++){
			
			cout<<"g calculations: "<<g<<endl;
			cout<<"d calculations: "<<d<<endl;
			
			if (d < amountOfIntegers){
				
		
				if (firsArray[g]>=firsArray[d]){
					
					cout<<firsArray[g]<<">="<<firsArray[d]<<endl;
					
					
					if (result<=firsArray[g]){
						
						result = firsArray[g];
						cout<<"New highest result is: "<<result<<endl;
						
						if (d==amountOfIntegers - 1){
					
							cout<<"patekau kur ir norejau"<<endl;
							goto exitFromLoop;
						}
					}
					
				}
				else{
						cout<<firsArray[g]<<"<"<<firsArray[d]<<endl;
						cout<<"Breaked!"<<endl;
						g = d - 1;
						break;
						
				}
				
			}
			else{
				
				result = firsArray[g];
				cout<<"New highest result test is: "<<result<<endl;
				
			}
			
		}
		
		
			
	}
	
	exitFromLoop:
	
	int calculationTheSameValues = 0;
	
	for(int q=0; q<amountOfIntegers; q++){
		
		if (secondArray[q] == result){
			
			calculationTheSameValues++;
			
		}	
		
	}
	
	
	return calculationTheSameValues;
	
}





string checkTextFromFile(string fileName, int stringSize){
	
	
	char allValues[1000];
	int k=0;
	
    ifstream f("skaiciai.txt");


    while (!f.eof())
    {
 
        
        f>>noskipws>>allValues[k];
        allValues[k] = allValues[k];
        k++;
        
    }
        
    
    f.close();
    
	

}




int main(int argc, char *argv[])
{
	
	

    system("pause");
    return EXIT_SUCCESS;
}
