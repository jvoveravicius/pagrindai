#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include<fstream>
using namespace std;




int compareIntegers(int a, int b, int c){
	
	int d;
	

	if(a>b) d=a;
    	else d = b;

	//d=(a>b)?a:b; // salyginis operatorius
	
	if (d<c) d=c;
	
	return d;
	
	
}


int main(int argc, char** argv) {
	
	int a, b, c;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	
	cout<<compareIntegers(a,b,c)<<endl;
	
	
	system("pause");
	return EXIT_SUCCESS;
}
