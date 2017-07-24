#include <cstdlib>
#include <iostream>
using namespace std;



/*
Užduotis: Studentas ruošiasi isigyti nauja kompiuteri. Apie kompiuterio kaina jis samprotauja taip:

-jeigu kompiuteris pigesnis nei 1000 Lt, tai jis pernelyg pigus;

-jeigu kompiuteris brangesnis nei 2500 Lt, tai jis pernelyg brangus;

-jeigu kompiuterio kaina nuo 1000 iki 2500 Lt, tai jis yra toks, koki pirkciau.

Sudarykite programa, kuri pagal parduotuves pateikta kaina, ivertina preke ir nurodo studento apsisprendima.
*/


int main() {
	
	
	string IntitialText = "Iveskite kompiuterio kaina: ";
	string LowerPriceStrint = "Kompiuteris pernelyg PIGUS. Nepirksiu.";
	string HigherPriceString = "Kompiuteris pernelyg BRANGUS. Nepirksiu.";
	string OkPrice = "Kompiuteris toks, koki pirkciau.";
	string StopLoop;
	
	
		
	int ShopPrice;
	int LowerPrice = 1000;
	int HigherPrice = 2500;
	
	do{	
		cout<<IntitialText<<endl;
		cin>>ShopPrice;
		
		if (ShopPrice < LowerPrice){
			cout<<LowerPriceStrint<<endl;
		}
		else if (ShopPrice>HigherPrice){
			cout<<HigherPriceString<<endl;
		}
		else{
			cout<<OkPrice<<endl;
		}
		cout<<"Jei norite sustabdyti programa parasykite TAIP"<<endl;
		cin>>StopLoop;
		
	}while(StopLoop!="TAIP");


	system("pause");
    return EXIT_SUCCESS;
}
