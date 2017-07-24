#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iostream>


using namespace std;


double compareValues(double a, double b, double c){
	
	double h;
	
	if(a>b) h=a;
    else h = b;

	if (h<c) h=c;
	
	return h;
	
	
}


int main(int argc, char** argv) {
	
	double a, b, c;
	bool confirmation, confirmConf;
	char confirmationChar;

	
	while (confirmation == false){
		
		cout<<"Please enter values:"<<endl;
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<"Didziausias skaicius yra: "<<compareValues(a, b, c)<<endl;
		
		
		do{
			
			cout<<"Continue? y/n?"<<endl;
			cin>>confirmationChar;
			
			if (confirmationChar == 'y'){
				confirmation = false;
				confirmConf = true;
			}
			else if (confirmationChar =='n'){
				confirmation = true;
				confirmConf = true;	
			}
			
			
		}while(confirmConf==false);
	
	
		
	}
	

	
	system ("pause");
	return EXIT_SUCCESS;
}
