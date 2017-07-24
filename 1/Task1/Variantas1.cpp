#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;


/*
Uzduotis:
Duotas sveikuju skaiciu masyvas, kurio elementai nuskaitomi iš tekstinio failo. Raskite didžiausia greta esanciu nuliu skaiciu. (Svetovas Povilas)

1 var. Algoritmas suiesko visus masyve esancius nulius. Tada is kaires ir desines puses nuo nulio paima skaicius ir priskiria juos i kita masyva. 
Naujam masyvui priskirtus skaicius palygina ir nustato, kuris is ju yra didziausias. Cia buvo mano pirma sios uzduoties interpretacija. Supratau sia vieta: 
"didžiausia greta esanciu nuliu skaiciu" butent taip.

Sia uzduoti norejau atlikti strukturiskai -  kiekviena funkcija atliktu dali uzduoties. Susiduriau su problema, kad nezinojau, kaip grazinti is funkcijos masyva.
Radau keleta variantu, kaip tai padaryti, bet pradejau dometis apie pointerius. Juos panaudojau isspresdamas si uzdavini. Dabar vel suprantu, kad galima buvo geriau padaryti, cia uztektu tik 
vienos rodyklines funkcijos. 
 
___________

Algoritmas:
1. Sukuria txt dokumenta su skaiciais nuo 0 iki 9 - createInitialRandomData funkcija.
2. Paima pradinius duomenys is sukurto txt dokumento - getInitialRandomData funkcija.
3. Suranda visus nulius masyve ir paima i nauja masyva skaicius is kaires ir desines nuo nulio - findAllZeroValues funkcija.
4. Suranda didziausia skaiciu - findLargerValue funkcija.
 
*/


//Prototipai
void createInitialRandomData(string, int);
int* getInitialRandomData(string, int);
int * findAllZeroValues(string, int);
int findLargerValue(string, int);

//txt file su atsitiktniais skaiciais sukurimas:
void createInitialRandomData(string fileName, int amountOfRandomValues){
	
	srand (time(NULL));
	fileName = fileName+".txt";
	ofstream f(fileName.c_str());
	
	for (int i=1; i<amountOfRandomValues + 1; i++){
		
		f<<rand()%10<<" ";
		if (i%5 == 0){
			f<<endl;
		}	
	}	
	
}


//Is sukurto txt file skaiciu paemimas i masyva:
int* getInitialRandomData(string fileName, int amountOfRandomValues){
	
    int* c = new int[amountOfRandomValues];
    /*
    cia radau dvi iseitis, arba sukurti masyva dinamiskai arba naudoti statiskai. Sukurus statiskai, as turejau masyvui duoti elementu skaiciu.
    Man si ideja nepatiko, kadangi tokiu atveju as irases konstanta uzkraunu be reikalo atminti, antras dalykas - as programoje suteikiu vartotojui galimybe paciam
	pasirinkti generuojamu skaiciu kieki, vadinasi jis gali buti didesnis uz duota masyvo elementu skaiciu. Issiaiskinau kaip ir sukuriau dinamiskai. 
    */
    
	int temp[amountOfRandomValues];
	

	//Paemimas is txt file sveikuju skaiciu
	fileName = fileName+".txt";
	ifstream f(fileName.c_str());
	
	int j = 0;
	while (!f.eof()){
		j++;
		f>>temp[j-1];
	}
	
	f.close();
	
    //priskirimas ju rodyklei, spauzdinimas ant consoles
    for (int i = 0; i < amountOfRandomValues; i++){

		//kad butu graziau, printinu paimtus skaicius is txt file kas 10
	  	if (i%10 == 0){
			cout<<endl;
		}	
    		
    	c[i] = temp[i];	
    	cout<<c[i]<<endl;
    
	} 
	
    return c;
}



//suranda visus salia 0 esancius skaicius:
int * findAllZeroValues(string fileName, int amountOfRandomValues){
		
	int* AllInitialValues = getInitialRandomData(fileName, amountOfRandomValues);
	int temp[amountOfRandomValues], z = 0, h = 0;
	int* c = new int [amountOfRandomValues];
	bool exitProgram = true;
	
	
	for (int i = 0; i < amountOfRandomValues; i++){
	
		AllInitialValues[i];
		
		//paieska nuliu:
		if (AllInitialValues[i] == 0){
			
			/*
			cia yra padarytos 3 salygos. 1. nulis yra pirmas skaicius, 2. Nulis yra paskutinis skaicius, 3. Nulis yra belekuris skaicius isskyrus 1 ir 2 salyga
			Jeigu nulis yra pirmas skaicius, is kaires puses nuo jo nieko nera. Del to, sioje vietoje as neegzistuojanti skaiciu prilyginu nuliui, kuris netrukdys man.
			Taip pat jeigu skaicius yra paskutinis.
			*/
			
			if (i==0){
				//irasau po du sveikuosius skaicius i temp masyva
				temp[h] = 0;
				temp[h + 1] = AllInitialValues[i + 1];
				
			}
			
			else if (i == amountOfRandomValues - 1){
				
				
				temp[h] = AllInitialValues[i - 1];
				temp[h + 1] = 0;
				
			}
			
			else{
				
				temp[h] = AllInitialValues[i - 1];
				temp[h + 1] = AllInitialValues[i + 1];
				
			}
			
			
			h = h + 2; 
			exitProgram = false;	
			
		}
		

		
	} 
	
	//pagal defaulta, loginis kintamasis yra true. Jeigu sugeneruotame file neegzistuoja nei vieno nulio, exitProgram negauna false ir programa sustabdoma. 
	//Nera prasmes vykdyti toliau programos, nes uzdavinys neatitinka salygos: atsitiktinai sugeneruotose skaiciuose nera nuliu.
	
	if (exitProgram == true){

		cout<<endl<<"0 value doesn't exist. Program is stopped."<<endl;
    	exit(0);
    	
	}
	
	
	else{
		
		
		c[0] = h;
		//c[0] visada parodo, kiek masyve yra elementu.
	
		for (int g = 1; g<h + 1; g++){
			
			c[g] = temp[g - 1];	
				
		}

		return c;
	
	}
	
	

}

//suranda diziausia salia nuliu esanti skaiciu:
int findLargerValue(string fileName, int amountOfRandomValues){
	
	
	int* All0InitialValues = findAllZeroValues(fileName, amountOfRandomValues);

	int result = 0, temp[All0InitialValues[0]], l = 0;
	
	
	for (int i = 1; i < All0InitialValues[0] + 1; i++){
		
		temp[i - 1] = All0InitialValues[i];	
				
	}
	
	
	
	//Printing..
	cout<<"\nValues between 0 integers are: "<<endl<<endl;
	while (l!=All0InitialValues[0]){
		
		cout<<temp[l]<<" 0 "<<temp[l+1]<<endl;
		l = l + 2;
		
	}

	
	//sioje vietoje lygina ir iesko didziausio skaiciaus
	
	for (int z = 0; z < All0InitialValues[0]; z++){
		
		for (int g = z + 1; g < All0InitialValues[0] + 1; g++){
			
			
			if (temp[z] > temp[g]){
				
			//jeigu temp[z] > temp[g], tada toliau tikrinu ar gautas naujas didziausias rezultatas yra didesnis uz absoliutu didziausia rezultata
				
				if (result <= temp[z]){
					
					result = temp[z];
					//jeigu rezultatas yra didesnis uz egzistavusi didziausia rezultata, naujas didziausias rezultatas privalo tapti result kintamuoju
				}
				
			}
			
			else{
				//nera prasmes toliau vykdyti su skaiciu temp[z] patikrinimus, jeigu bent vienas salia esantis skaicius yra didesnis
				break;
			}
					
		}  
	
		
	}
	
	return result;
	
}


int main(int argc, char *argv[])
{

	string fileName;
	int amountOfRandomValues;
	
	cout<<"Enter file name: "<<endl;
	cin>>fileName;
	
	cout<<"Enter amount of random integers in "<<fileName<<".txt"<<endl;
	cin>>amountOfRandomValues;
	cout<<"Amount of random integers: "<<amountOfRandomValues<<". All integers are saved into "<<fileName<<".txt"<<endl<<endl<<"Randomly generated integers list: "<<endl;
	
	createInitialRandomData(fileName, amountOfRandomValues);	
	cout<<endl<<"RESULT IS: "<<findLargerValue(fileName, amountOfRandomValues)<<endl;


    system("pause");
    return EXIT_SUCCESS;
}
