#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>


using namespace std;


/*
4. Duotas tekstas tekstiniame faile. Pašalinkite iš failo žodžius, kurie prasideda ir baigiasi tokia pat raide. (Leonaviciute Indre)
*/

void createAndSaveTextToFile(string Content){
	
	string fileName = "modified.txt";
	srand (time(NULL));
	ofstream f(fileName.c_str());
	f<<Content;
	
}

string checkFile(){
	
	char b_check[1000], b_result[1000], firstWordCaharacter, lastWordCharacter;
	bool checkActivation = false, adjustedResult = false;
	int k=0, firstCharacter, lastCharacter;
	int array_CountertoRemove = 0, arrayValueToReturn = 0;
    ifstream f("skaiciai.txt");


    while (!f.eof())
    {
 
        
        f>>noskipws>>b_check[k];
        b_result[k] = b_check[k];
        k++;
        
    }
        
    
    f.close();
    
    
	int finalAmountOfArrayResult = k - 1;
   
   for (int i=0; i < k - 1; i++){
	    	
	    	
	    	if (checkActivation == false){
	    		
	    		firstWordCaharacter = b_check[i];
	    	//	b_result[i] = b_check[i];
	    		firstCharacter = i;
	    		
	    		checkActivation = true;
	    		cout<<"FIRST CHARACER "<<firstWordCaharacter<<endl;
	   
	    		
			}
			else{
				
				int i_temp_for = i;
				int i_temp = i;
				
				while(b_check[i_temp_for] != ' ' && i_temp_for < k - 1){
					
				//	cout<<b_result[i_temp_for]<<endl;
					i_temp_for++;
					
						
				}
				
			
				i_temp = i_temp_for;
				
				
				while (b_check[i_temp - 1] == '!' || b_check[i_temp - 1] == ' ' ||  b_check[i_temp - 1] == '?' ||  b_check[i_temp - 1] == '.'){
					
					i_temp--;
					
				}
				
				lastWordCharacter =  b_check[i_temp - 1];
				lastCharacter = i_temp - 1;
				
				
				
				cout<<"LAST CHARACTER "<<lastWordCharacter<<endl;			
				checkActivation = false;
			
				
				
				if (lastWordCharacter == firstWordCaharacter){
					
						
					cout<<"Patekau, ten kur reikia!"<<endl;
					
					for (int s=firstCharacter; s<lastCharacter + 1; s++){
						
						b_result[s] = ' ';
						cout<<array_CountertoRemove<<endl;
						array_CountertoRemove++;
						
					} 
					
					
					
				}

			
				i = i_temp_for;								
			}
			
	    	
	}
	
	
//	finalAmountOfArrayResult = 
	int SpaceCounter = 0, removeSpaceCounter = 0;
	bool exitFromSpace = false;

	do{
		
		
		if(b_result[SpaceCounter] != ' '){
			
		//	b_result[removeSpaceCounter] = ' ';

			b_result[removeSpaceCounter] = b_result[SpaceCounter];
			removeSpaceCounter++;
			exitFromSpace = false;
		}
		else{
			
			if (removeSpaceCounter != 0){
				
				if (exitFromSpace == false){
				
				b_result[removeSpaceCounter] = ' ';
				removeSpaceCounter++;
				exitFromSpace = true;
				
				}
			
				
			}
		
		}

		SpaceCounter++;

	}while(SpaceCounter<finalAmountOfArrayResult);
	
	

	
	string ResulStr(b_result,removeSpaceCounter);
	//cout<<ResulStr<<endl;
	
	return ResulStr;
		

	
}




int main(int argc, char *argv[])
{	
	//cout<<checkFile()<<endl;
	createAndSaveTextToFile(checkFile());
	
    system("pause");
    return EXIT_SUCCESS;
}
