#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>


using namespace std;


/*
Uzduotis:
12. Duotas tekstas tekstiniame faile. Teksta renkant padaryta teksto rinkimo klaidu (sakinys po taško pradedamas mažaja raide). 
Parašykite programa, kuri automatiškai ištaiso tokias teksto rinkimo klaidas. (Svetovas Povilas)

____________

Algoritmas:
1. Sukuria *.txt, kuriame vartotojas iraso norima teksta
2. Perskaito sukurta *.txt
3. Patikrina, ar egzistuoja simboliai po kuriu reikalinga didzioji raide
4. Pakeicia i didziasias raides, kur reikia
5. Iraso *_corrected.txt file, su pakeitimais

*/

//Prototipai:
void createAndSaveTextToFile(string, string); //sukuria .txt file su vartotojo tekstu
string checkTextFromFile(string, int);
/* 
1. nuskaito teksta is sukurto .txt file, duomenys perkelia kaip char masyva
2. vykdo patikrinimus su kiekvienu char masyvo elementu, ar egzistuoja:
	pirma raide mazoji;
	simboliai [.], [!], [?] po kuriu reikia pradeti sakini is didziosios raides;
3. pakeicia i didziasias raides, kur to reikia
4. pavercia char masyva i string'a ir grazina nauja pataisyta teksta
*/



void createAndSaveTextToFile(string fileName, string Content){
	
	fileName = fileName+".txt";
	srand (time(NULL));
	ofstream f(fileName.c_str());
	f<<Content;
	
}


string checkTextFromFile(string fileName, int stringSize){
	
	
	char fromFile[stringSize]; //masyvas i kuri nuskaitomas tekstas
	bool changeToUpper = false , existChanges = false; //naudojami patikrinimams, ar egzistuoja klaidos
	int z = 0; // nurodo nuskaitytu simboliu kieki is txt file
	
	//nuskaitymas
	fileName = fileName+".txt";
	ifstream f(fileName.c_str());

	while (!f.eof()){
		z++;
		f>>noskipws>>fromFile[z-1];
		 
	}
	
	f.close();
	
	
	//patikrinimai
	for (int i = 0; i<stringSize; i++){
		
		
		if (i == 0){
			
			
			if (islower(fromFile[i])){
			
				fromFile[i] = toupper(fromFile[i]); //0 masyvo elementa, jeigu is mazosios raides, padarau didziaja
				existChanges = true; // norodau, kad jau yra pakeitimai, ir visas tekstas turi buti grazintas is funkcijos
							
			}
			
				
		}
		
		else{
			
			
			if (fromFile[i] == '.' || fromFile[i] == '?' || fromFile[i] == '!'){ //trys salygos, prie kuriu reikia padaryti didziaja raide
			
			
			changeToUpper = true; //nurodau, kad reikia aktyvinti mazosios raides paieska
			continue; // praleidziame +1 int i, nes butent si i yra "." , "?" arba "!" ... ir negali buti kitaip
			
			
			}
			
			

			if (changeToUpper == true){
		
				if (fromFile[i] != ' '){ //po tasko gali buti tarpu. Del to reikalingas sis patikrinimas
					
					
					if (islower(fromFile[i])){ //patikrinimas, ar tikrai reikia kelti i didziaja raide
						
						fromFile[i] = toupper(fromFile[i]); //keliam i didziaja raide
						existChanges = true; // nurodau, kad egzistuoja pakeitimai ir reikia, kad visa redaguota teksta funkcija grazintu
							
					}
				
					changeToUpper = false; // cia reikalingas false, del to, kad jeigu jo nebus, nuo paskutinio tasko vykdys nereikalinga patikrinima, kurio rezultatas uppercase characters
				
				}
				
			}
					
		}
			
	}
	
	
	string ResulStr(fromFile,stringSize); //char >> string
	
	if (existChanges == false){
		
		ResulStr = "no changes.";
	}
	else{
		
		createAndSaveTextToFile(fileName+"_correction", ResulStr);
		cout<<endl<<"Text file << "<<fileName+"_correction.txt"<<" >> was created. "<<endl;
	}

	return ResulStr;
	

}




int main(int argc, char *argv[])
{
	
	/*
	char userChoose;
	string str, fileName;
	bool enterMainInstruction = false;
	
	
	toStart: 
	
	if (enterMainInstruction==true){
		cin.ignore(); //cin palieka newline character, del to be cin.ignore automatiskai is switch keliauja i "write text", vietoje "enter file name"
			
		cout<<"Enter file name:"<<endl;
		getline(cin, fileName);
	
		cout<<endl<<"Write text in "<<fileName<<".txt file"<<endl;
		getline(cin, str);

		cout<<endl<<"Text was entered: "<<str<<endl;
		
		createAndSaveTextToFile(fileName, str);
		
		string correctedText = checkTextFromFile(fileName, str.size());
		cout<<"Correction: "<<correctedText<<endl<<endl;
	
	
		enterMainInstruction = false;
	
	}
	
	cout<<"Would you like to write text? y/n"<<endl;
	cin>>userChoose;
	
	switch(userChoose) {
		case 'y' :
			enterMainInstruction = true;		
			goto toStart;
			
		case 'n' :
			cout<<"Program was stopped."<<endl;
			break;
			
		default :
			cout<<"Please choose between [y] key (to write text) and [n] key (to exit program)."<<endl;
			goto toStart;
			
	}
	*/

	

    system("pause");
    return EXIT_SUCCESS;
}
