#include <iostream>
#include <cstdlib>
using namespace std;

//13. Lektuvas pakilo iš oro uosto, kai laikrodis rode v valandu ir m minuciu. Skrydžio trukme v1 valandu ir m1 minuciu. Koki laika rodys laikrodis, kai lektuvas nusileis?

int takeOffTimeHours, takeOffTimeMinutes, tripTimeHours, tripTimeMinutes, finalHours, finalMinutes, finalMinutesHours, finalDays;




int checkIfCorrectTimeValues(){
	
	int loopControlValues;
	loopControlValues = 0;
	
	do{
		
		
		if (loopControlValues==0){
			
			
			cout<<"Enter take off time (Hours, Minutes):"<<endl;
			
			cin>>takeOffTimeHours>>takeOffTimeMinutes;
		
		
			if (takeOffTimeHours>23){
				cout<<"Error: incorrect take off hours value!"<<endl;
				
				if (takeOffTimeMinutes>59){
					cout<<"Error: incorrect take off minutes value!"<<endl;
				}
			}
			else{
				
				cout<<"Your take off time is: "<<takeOffTimeHours<<":"<<takeOffTimeMinutes<<endl;
				loopControlValues = 1;
			}
			
			
		}
		
		else if (loopControlValues == 1){
			
			
			cout<<"Enter trip time (Hours, Minutes):"<<endl;
			cin>>tripTimeHours>>tripTimeMinutes;
			
			
			if (tripTimeMinutes>59){
				
				cout<<"Error: incorrect trip minutes value!"<<endl;
				
			}
			else{
				
				cout<<"Your trip time is: "<<tripTimeHours<<":"<<tripTimeMinutes<<endl;
				loopControlValues = 2;
			}
		
					
		}
	
	}while(loopControlValues != 2);

}



int tripsCalc(){
	
	finalMinutesHours = 0;
	finalDays = 0;
	bool mybool;
	

	
	
	finalMinutes = takeOffTimeMinutes + tripTimeMinutes;

	

	do{
	
		if (finalMinutes>59){
			
		
				finalMinutesHours = finalMinutesHours + 1;		
				finalMinutes = finalMinutes - 59;
						
		}
		
				
	}while(finalMinutes>60);
	
	


	finalHours = takeOffTimeHours + tripTimeHours + finalMinutesHours;
	
	//cout<<"FINAL"<<finalHours<<endl;
	
	
	
	do{
	
		if (finalHours>23){
			
		
				finalDays = finalDays + 1;		
				finalHours = finalHours - 23;
						
		}
				
	}while(finalHours>23);
	
	
	
	cout<<"Mano final days: "<<finalDays<<endl;
	cout<<"my final hours is: "<<finalHours<<endl;
	cout<<"Mano final minutes yra: "<<finalMinutes<<endl;

	
}



int main() {
		
	
	checkIfCorrectTimeValues();
	tripsCalc();
	
		
	system("pause");
	return EXIT_SUCCESS;
}
