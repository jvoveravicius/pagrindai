#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <math.h>


using namespace std;


//deklaravimas
int randomValue();
int randomArrayValue(int);
int paskaiciuojaKiekSkaiciu(int);
int sudedaVisusSkaicius(int);
int calArray(int, int);


int readingFile(){
	
	char fromFile[100];
	string fileName = "labas.txt";
	int i = 0;
	
	ifstream f(fileName.c_str());

	while (!f.eof()){
		i++;
		f>>fromFile[i-1]>>noskipws;
	}
	
	f.close();
	
	
	
	for (int i=0; i<10; i++){
	
		cout<<fromFile[i]<<endl;
		
	}
	
	
}


int writeFile(){
	
	string fileName = "labas.txt";
	
	srand (time(NULL));
	ofstream f(fileName.c_str());
	
	for (int i=1; i<100 + 1; i++){
	
		f<<rand()%10<<" ";
		
		//atskiria stulpeliais irasomus skaicius		
		if (i%5 == 0){
			f<<endl;
		}	
	}	
	
	
}


int randomValue(){
	
	int randomValue;
	srand (time(NULL));
	return randomValue = rand() % 100;

}


int randomArrayValue(int n){
	
	int myArray[n];
	
	srand (time(NULL));
	
	for (int i = 0; i < n; i++){

		
		myArray[i] = rand() % 100;
		cout<<"Array : "<<myArray[i]<<endl;
		
	}
	

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
	
	
	/*
	
	kaip naudoti
	int test[] = {10, 20};
	calArray(test, 2);
	*/
	

}


int roundedValue(float roundValue){
	
	cout<<round(roundValue)<<endl;
	
}





int main(int argc, char** argv) {
	
	
	//readingFile();
	writeFile();
	
	system("pause");
    return EXIT_SUCCESS;
}



/*
Operandus ir operacijas atskirkite tarpais;
? Logines programos dalis atskirkite tušciomis eilutemis;
? Kiekviena sakini rašykite naujoje eiluteje. Tik trumpus ir
susijusius sakinius galite rašyti vienoje eiluteje;
? Riestiniam skliaustui skirkite atskira eilute;
? Venkite labai ilgu eiluciu;
? Teksto atitraukimas iš kaires žymi programos bloku
pavalduma;
? Programoje rašykite komentarus.
*/
