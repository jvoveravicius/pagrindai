#include <iostream>
#include <cstdlib>

using namespace std; 

/* 10. Mokslininkai nustate, kad norint sužinoti, kiek laiko reikia miegoti žmogui, 
ne vyresniam kaip 18 metu, reikia naudotis formule t = 8 + (18 – a)/2; cia t – laikas valandomis, a – amžius metais. 
Parašykite programa, kuri apskaiciuotu, kiek laiko turi miegoti žmogus nuo kudikystes iki 18 metu. Skaiciavimu rezultatus pateikite ekrane.

*/


int sleepLengh(int a){
	int t;
	t = 8 + (18-a)/2;
	return t;	
}


void sleepLenghFullLoop(){
	
	cout<<"Atspauzdinama pilna lentele: " <<endl;
	
	for (int i = 1; i<19; i++){
		cout<<"Metai: "<<i<<". Miegui valandos: "<<sleepLengh(i)<<endl;
	}
	
}



int main(int argc, char** argv) {
	
	int personYars;
	char chooseOption;
	

	do{
		
		
		cout<<"Pasirinkite: e - leidzia ivesti norima reiksme. f - atspauzdina visas reiksmes iki 18 metu. u - uzdaryti programa"<<endl;
		cin>>chooseOption;
		
		switch(chooseOption){
			
		case 'e' :
        cout << "Iveskite amziu: " << endl; 
        cin>>personYars;
        cout<<"Turi miegoti: "<<sleepLengh(personYars)<<endl;
		break;
		
		case 'f' :
		sleepLenghFullLoop();
		break;
	}
	
		
		
	}while (chooseOption!='u');

	
	
	system("pause");
	return EXIT_SUCCESS;
}
