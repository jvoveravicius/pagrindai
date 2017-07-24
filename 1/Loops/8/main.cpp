#include <iostream>
#include <cstdlib>
# include <cmath>
using namespace std;


/* 
8. Nauja Honda Civic su 1,8 l benzininiu varikliu ir automatine pavaru deže kainuoja 70.820,00 Lt. Tokia mašina 100 km vidutiniškai suvartoja 6,9 litru. 
Nauja Honda Insight su 1,3 l benzininiu varikliu ir automatine pavaru deže kainuoja 80.920,00 Lt. Tokia mašina 100 km vidutiniškai suvartoja 4,6 litrus degalu. 
Perkiek laiko Honda Insight pasidarys ekonomiškesne nei Honda Civic, jei per menesi yra nuvažiuojama 400 km, o vieno litro benzino kaina šiuo metu yra 4,53Lt? 

Ekrane atvaizduokite visus žinomus pradinius duomenis ir gauta rezultata. 
 */


float fuelCalculator(float FuelCosuption){
	
	float resultinLT;
		
	resultinLT = (FuelCosuption * 4.53) * 4;
		
	return resultinLT;
	
}




int main() {
	
	float Civic(6.9), Insight(4.6), ResultCivic, ResultInsight, ResultDiff;
	float PriceCivic = 70820, PriceInsight = 80920, PriceDiff;
	int month = 0;
	
	PriceDiff = PriceInsight - PriceCivic;
	
	cout<<"Skirtumas tarp kainu: "<<PriceDiff<<"LT"<<endl;
	
	
	do{
		
		month++;
		cout<<"Menesiai: "<<month<<endl;
		ResultCivic += fuelCalculator(Civic);
		ResultInsight += fuelCalculator(Insight);
		
		ResultDiff += ResultCivic - ResultInsight;
		
		
		cout<<"Civic: "<<ResultCivic<<endl;
		cout<<"Insign: "<<ResultInsight<<endl;
		cout<<"My Money: "<<ResultDiff<<endl<<endl;
		
		
	}while(PriceDiff>ResultDiff);
	
	cout<<"Ats: Insign atsipirks per "<<month<<" men."<<endl;
	
	
	
	
	
	system("pause");
	return EXIT_SUCCESS;
}
