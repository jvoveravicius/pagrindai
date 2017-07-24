#include <iostream>
#include<cstdlib>
using namespace std;

// 12. Turime tris indus, kuriuose telpa v1, v2 ir v3 litru (turiai - sveikieji skaiciai). Parašykite programa, kuri patikrintu, ar galima šiais indais ipilti tiksliai v litru (v - sveikas skaicius).

int main() {
	
	string tekstai[]={"Iveskite litrus: ","Pirmas Indas: ","Antras Indas: ", "Trecias Indas: ", "Litru suma yra: "};
	int indai[3];
	int litraiVandens, rezultatasVandens;
	int i, z;
	
	
	z = 0;
	rezultatasVandens = 0;
	
	cout<<tekstai[0]<<endl;
	cin>>litraiVandens;
	
	
	do{
		
		
		z++;
		//cout<<z<<endl;
		
		for (i=0; i<3;i++)
		
		{
			
			if (z==1){
			
			cout<<tekstai[i+1]<<endl;
			cin>>indai[i];
			
		}
		
		else if (z==2){
			
			rezultatasVandens = rezultatasVandens + indai[i];
			
		
		}
	
		
		else{
			
			
			cout<<tekstai[4]<<rezultatasVandens<<endl;
			
			
			if (litraiVandens>rezultatasVandens || litraiVandens==rezultatasVandens){
				
				cout<<"TILPS, litrai yra: "<<rezultatasVandens<<", o norima ipilti: "<<litraiVandens<<" litru vandens"<<endl;
			}
			
			else{
				
				cout<<"NETILPS, litrai yra: "<<rezultatasVandens<<", o norima ipilti: "<<litraiVandens<<" litru vandens"<<endl;
			}
			
			i=1000;
			
		}
					
		
			
	}	
		
	}while(i<999);
	

	
	
	
	
	
	system("pause");
    return EXIT_SUCCESS;
}
