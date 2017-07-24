#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;


/*
Uzduotis:
Duotas sveikuju skaiciu masyvas, kurio elementai nuskaitomi iš tekstinio failo. Raskite didžiausia greta esanciu nuliu skaiciu. (Svetovas Povilas)

2 var. Sukuriau algoritma, kuris suiesko didziausia greta vienas kito esanciu nuliu skaiciu t.y. kiek daugiausiai eina 0 is eiles. Pvz.: sekoje 0 1 0 0 0 1 0 1 1 1 - didziausias 0 skaicius yra 3.

____________

Algoritmas:
1. Sukuriu randomZero.txt, kuri sudaro atsitiktine tvarka surikiuoti 0 ir 1 skaiciai: void createInitialRandomData funkcija (minValue ir maxValue argumentai).
2. Suskaiciuoju ir grazinu didziausia greta esanciu nuliu skaiciu int getAndalculateAmountOfIntegers funkcija.
 
*/

//Prototipai:
void createInitialRandomData(int, int, int);
int getAndalculateAmountOfIntegers(int);



void createInitialRandomData(int minValue, int maxValue, int amountOfIntegers, string fileName){
	
	fileName = fileName+".txt";
	
	srand (time(NULL));
	ofstream f(fileName.c_str());
	
	for (int i=1; i<amountOfIntegers + 1; i++){
	
		f<<rand()%(maxValue-minValue + maxValue) + minValue<<" ";
		
		//atskiria stulpeliais irasomus skaicius		
		if (i%5 == 0){
			f<<endl;
		}	
	}	
	
}


int getAndalculateAmountOfIntegers(int amountOfIntegers, string fileName){

	int fromFile[amountOfIntegers];
	int i = 0, result = 0, tempValue = 0;
	
	
	//paemimas is txt dokumento
	fileName = fileName+".txt";
	ifstream f(fileName.c_str());

	while (!f.eof()){
		i++;
		f>>fromFile[i-1];
	}
	
	f.close();
	
	
	//sioje vietoje atvaizduoja informacija consoleje. Suskaiciuoja kiek yra daugiausiai 0, kurie eina is eiles.
	for (int g = 0; g < amountOfIntegers; g++){

		//sitoje vietoje informacijos parodymas. Atvaizduojami skaiciai kas 5. 
	  	if (g%5 == 0){
			cout<<endl;
		}	
    	cout<<fromFile[g]<<endl;
		
		
		
		//sioje vietoje skaiciavimus
		if (fromFile[g]>0){
			
			//jeigu esantis masyve skaicius yra didesnis uz 0, mano nuliu skaiciuoklis yra perkraunamas.
			tempValue = 0;
		}
		
		
		else{
			
			//priesingu atveju, as skaiciuoju is eiles einanciu nuliu skaiciu
			tempValue++;
			
			/*
			bet problema yra ta, kad man reikia lyginti su didziausiu jau egzistuojanciu nuliu kiekiu. 
			Kitaip bus taip, kad mano skaiciuoklis rodys tik tai paskutini, o ne didziausia rezultata. Uz tai atsako sis if'as.
			*/
			if (tempValue>result){
						
				result = tempValue;
				//prilyginu rezultata - naujam is eiles einanciu nuliu rekordui.

			}
			
		}
		
	}
		
	return result;
	
	
}



int main(int argc, char *argv[])
{
	
	int amountOfIntegers = 100;
	string fileName = "randomZero";
	
	createInitialRandomData(0, 1, amountOfIntegers, fileName);
	cout<<"Result is: "<<getAndalculateAmountOfIntegers(amountOfIntegers, fileName)<<endl;
	
    system("pause");
    return EXIT_SUCCESS;
}
