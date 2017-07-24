#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;


/*
Uzduotis:

8. Sugeneruokite du sveikuju skaiciu masyvus. turincius po n elementu. Nustatykite kiek kartu didžiausias pirmojo masyvo elementas kartojasi antrame masyve. (Nicajus Dominykas)


*/


int generateArrays(int);
int howManyRepeats(int);
int rask(int);
int howManyRepeats(int);




int randomValue(){
	
	int randomValue;
	
	srand (time(NULL));
	return randomValue = rand() % 100;

}



int howManyRepeats(int data[], int n, int l)
{
   
   int amountOfTheSameValue = 0;

   
   for (int i=0; i<n; i++){
   	
   		cout<<data[i]<<endl;
   		
   		
   		if (data[i] == l){
   			
   			amountOfTheSameValue++;
   			cout<<"Such value exists!"<<endl;
   			cout<<"Amaount: "<<amountOfTheSameValue<<endl;
		}	
   	
   }
   
   return amountOfTheSameValue;
   
}




int generateArrays(int n){
	
	
	int myArray0[n], myArray1[n], bestResult = 0;
	
	srand (time(NULL));


	//generate arrays
	for (int i = 0; i < n; i++){
		
		//set random value
		myArray0[i] = rand() % 100;
		myArray1[i] = rand() % 100;
		
		cout<<"1st : "<<myArray0[i]<<endl;
		cout<<"2st : "<<myArray1[i]<<endl;
		
		if (myArray0[i] > bestResult){
			//find best value
			bestResult = myArray0[i];
			
		}

	}
	

	howManyRepeats(myArray1, n, bestResult);

//	return bestResult;
	
	
}






int main(int argc, char** argv) {
	
	
	cout<<"Total amount of value is: "<<generateArrays(1000)<<endl;

	system("pause");
    return EXIT_SUCCESS;
}
