#include <iostream>
#include <cstdlib>
# include <cmath>
using namespace std;



/* 

Užduotis nedalyvavusiems paskaitoje:

Pristigo žmogus pinigu ir nuejo pasiskolinti ju iš kaimyno. 
Tas sutiko paskolinti, bet papraše gražinti juos kita menesi tokia tvarka: 

pirma menesio diena- 1 lita, antraja - 2 litus, treciaja 4 litus, t. y. kiekviena diena du kartus daugiau negu prieš tai buvusia. 

Ta diena, kai skola gales buti padengta, reikes atiduoti ir visa tos dienos norma. Tai, kas bus atiduota daugiau, ir bus kaimyno palukanos. 
  
Parašykite programa, kuri apskaiciuotu, kiek palukanu litais gaus kaimynas už paskolintus n litu.Pasitikrinimui. Kai n = 11, turetumete gauti palukanas = 4.

*/




int main(int argc, char** argv) {
	
	
	int n, days = 0; // 1. deklaruoju skolinamus pinigus 2. deklaruoju ir inicializuoju dienas, noriu isvesti grazinimo grafika uz kiekviena diena
	int returningMoney = 0; //deklaruoju kintamaji, kuri naudosiu pinigu grazinimo cikle, inicializuoju ji su 0 reiksme
	
	
	cout<<"Iveskite suma litais, kuria norite pasiskolinti is kaimyno: "<<endl;
	cin>>n;	
	cout<<endl<<"Jusu suma yra "<<n<<" lt. Vykdome skaciavima..."<<endl;
	//Ivestys, pranesimai 
	
	
	
	do{
		
		days++;
		returningMoney*=2;
		returningMoney++;
		
		cout<<"Uz "<<days<<" diena kaimynui grazinsi "<<returningMoney<<" lt"<<endl;		
		
	}while(returningMoney < n); 
	
	
	cout<<endl<<"Suma grazinsite per "<<days<<" dienas. Jus grazinsite: "<<returningMoney<<" lt. Is ju palukanos bus "<<returningMoney - n<<" lt "<<endl;
	
	
	
	system("pause");
	return EXIT_SUCCESS;
}
