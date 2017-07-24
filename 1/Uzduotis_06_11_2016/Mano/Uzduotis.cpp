/*
UZDUOTIS: 
Duoti du nelygus nuliui skaiciai a ir b. Raskite ju suma, jeigu jie yra vienodu ženklu, ir sandauga, jeigu jie yra priešingu ženklu.
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main()

{
	
	double ivestis_A, ivestis_B, Rezultatas; //double kintamuosius naudoju, nes uzduotyje nenurodyta ar duoti skaiciai yra sveikieji
	string strOpPavad[2]; //stringu masyva panaudojau salygoje. Tiesiog taip man patogiai isvesti rezultata ant consoles
  
		
   cout<<"Iveskite du skaicius:"<<endl;
   cin>>ivestis_A>>ivestis_B;
   //pradiniu duomenu ivedimas
   


	if (ivestis_A!=0 && ivestis_B!=0){
		//patikrinimas, ar ivesti skaiciai nera 0. Nes uzduoties salyga teigia: "Duoti du nelygus nuliui skaiciai a ir b."
		//priesingu atveju rodau pranesima, kad salygos neatitinka
			
			
		if ((ivestis_A>0 && ivestis_B>0) || (ivestis_A<0 && ivestis_B<0)){
			//patikrinimas, kuri atitikus vykdoma sudeties operacija. Nes uzduoties salyga teigia: ... Raskite ju suma, jeigu jie yra vienodu ženklu ..", t.y ++, --
			Rezultatas = ivestis_A + ivestis_B;
			strOpPavad[0] = "Skaiciai yra vienodu zenklu: ivykdyta sudetis. ";
			strOpPavad[1] = " suma ";

		}
		
		else{
			//viskas, kas yra else, atitinka uzduoties salyga: "..ir sandauga, jeigu jie yra priešingu ženklu"
			Rezultatas = ivestis_A * ivestis_B;
			strOpPavad[0] = "Skaiciai yra priesingu zenklu: ivykdyta daugyba. ";
			strOpPavad[1] = " sandauga ";	
		}
		
		
		//isvedu gauta rezultata
		cout<<strOpPavad[0]<<"Skaiciu "<<ivestis_A<<" ir "<<ivestis_B<<strOpPavad[1]<<"yra "<<Rezultatas<<"."<<endl;  

	}
	
	else{
		
		cout<<"Ivesti duomenys neatitinka salygos. Programa nebus vykdoma."<<endl;
	}
	

	system("pause");
    return EXIT_SUCCESS;
}
