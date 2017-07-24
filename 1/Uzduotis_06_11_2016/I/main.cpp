/*
Gabrielius Kalnikas, Gina Gelžinyte, Martynas Jaraminas, Kestas Kiaušas

Užduotis: Laikrodžio rodoma laika, išreikšta valandomis minutemis ir sekundemis padidinkite viena sekunde. Parodykite pradini ir po sekundes gauta laika.

Rezultatu spausdinimo pavyzdys:

Laikrodis rode: 02:12:59

Po sekundes: 02:13:00

*/

#include <cstdlib>
#include <iostream>
using namespace std;








int entering(){

int i;

string initialText = "Iveskite valandas, minutes, sekundes: ";
string finalText = "Jus ivedete laika: ";
string finalResultText = "Po vienos sekundes bus: ";

string TimesStr[] = {"Valandos", "Minutes", "Sekundes"};
int MaxValues[] = {23, 59, 59};

string badInitialValues = "Ivestos negalimos reiksmes: ";
int TimesStrSize = sizeof(TimesStr)/sizeof(TimesStr[0]);
int imputTime[TimesStrSize];
int resultTime[TimesStrSize];


	cout<<initialText<<endl;
	
	for(i = 0; i < TimesStrSize; i++){
	
		bool getCorrectValue;
		
			do {
				
				cin>>imputTime[i];
				
				if (imputTime[i]>MaxValues[i] || imputTime[i]<0){
					
					cout<<badInitialValues<<TimesStr[i]<<endl;
					getCorrectValue = false;
				}
				
				else{
					
					cout<<TimesStr[i]<<endl;
					getCorrectValue = true;
					
				}
				
					
			}while( getCorrectValue == false );	
			
	}	
	
	
	if (imputTime[2]==MaxValues[2]){
		
		
		resultTime[2] = 0;
		
		
		if (imputTime[1]==MaxValues[1]){
			resultTime[1] = 0;
			

			if(imputTime[0]==MaxValues[0]){
				resultTime[0] = 0;
				
			}
			else{
				resultTime[0] = imputTime[0] + 1;
			}
				
		}
		
		else{
			//resultTime[1] = imputTime[1] + 1;
			resultTime[1] = imputTime[1] + 1;
			resultTime[0] = imputTime[0];
		}
		
		
	}
	else{
		resultTime[2] = imputTime[2] + 1;
		resultTime[1] = imputTime[1];
		resultTime[0] = imputTime[0];
	}
	
	cout<<finalText<<imputTime[0]<<":"<<imputTime[1]<<":"<<imputTime[2]<<endl;
	cout<<finalResultText<<resultTime[0]<<":"<<resultTime[1]<<":"<<resultTime[2]<<endl;
	
}




int main()

{
	entering();
	system("pause");
    return EXIT_SUCCESS;
}
