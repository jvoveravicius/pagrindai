#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;


int calculateSum(int, int);


char symbolicateText(){
	
	char test[] = {'A', 'Z'};
	
	char alphaBet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'Y', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'Š', 'T', 'U', 'V', 'Z'};
	int maxValue = sizeof(alphaBet)/sizeof(*alphaBet);
	int tempValue = sizeof(test)/sizeof(*test);
	
	
	
	for (int i = maxValue - 1; i>=0; i--){
		
		cout<<"I reiksme"<<i<<endl;
		
		for (int z = 0; z<tempValue; z++){
			
			cout<<"Z reiksme"<<z<<endl;
			
			if (alphaBet[i] == test[z]){
				
				
				
				
			}
			else{
				
				cout<<"ne ok"<<endl;
				cout<<alphaBet[i]<<endl;	
				
			} 
			
		}
	

	}
	
	
	
	
}




int main()
{
	
	int howManyNumbers;
	
	cout<<"Sifravimo kodai"<<endl;
	cout<<"Pateikite per kiek raidziu sifruoti:"<<endl;
	
	cin>>howManyNumbers;
	symbolicateText();
	
	
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

