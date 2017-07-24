#include <iostream>
#include<cstdlib>
using namespace std;

//Užduotis: Automobilis per t1 valandu nuvažiavo s1 kilometru, o motociklas per t2 valandu - s2 kilometru. Nustatykite, kuri transporto priemone viršijo leistina kelyje greiti v0 km/h.

int main() {
	
	double timeCar, timeBike, kmCar, kmBike, legalSpeed, speedCar, speedBike;
	
	
	cout<<"Irasykite leistina greiti (k/h): "<<endl;
	cin>>legalSpeed;
	
	cout<<"Automobilio nuvaziuotos valandos:"<<endl;
	cin>>timeCar;
	
	cout<<"Automobilio nuvaziuotas atstumas kilometrais:"<<endl;
	cin>>kmCar;
	
	
	cout<<"Motociklo nuvaziuotos valandos:"<<endl;
	cin>>timeBike;
	
	cout<<"Motociklo nuvaziuotas atstumas kilometrais:"<<endl;
	cin>>kmBike;
	
	
	speedCar = kmCar / timeCar;
	speedBike = kmBike / timeBike;
	
	cout<<"Automobilio greitis yra: "<<speedCar<<" k/h."<<endl;
	cout<<"Motociklo greitis yra: "<<speedBike<<" k/h."<<endl;
	
	
	if(legalSpeed<speedCar&&legalSpeed<speedBike){
		cout<<"Abi transporto priemones virsyjo leistina greiti, kai leistinas greitis yra "<<legalSpeed<<" km/h."<<endl;
	}
	else if (legalSpeed>=speedCar&&legalSpeed>=speedBike){
		cout<<"Nei viena transporto priemone nevirsijo greicio, kai leistinas greitis yra: "<<legalSpeed<<" km/h."<<endl;
	}
	
	else{
		
		if (legalSpeed<speedCar){
			cout<<"Automobilis virsijo leistina greiti, kai leistinas greitis yra "<<legalSpeed<<" km/h."<<endl;
			return 0;
		}
		
		if (legalSpeed<speedBike){
			cout<<"Motociklas virsijo leistina greiti, kai leistinas greitis yra "<<legalSpeed<<" km/h."<<endl;
		}

	}
	
	
	system("pause");
    return EXIT_SUCCESS;
}
