#include <iostream>
using namespace std;

double interes, inversion;
int main(){
	cout <<"Ingresar el monto capital incial: ";
	cin >> inversion;
	
	interes = inversion*0.2;
	
    if(interes > 7000) {
    	inversion = inversion + interes;
	}
	else {
		inversion = inversion;
	}
	cout <<"El interes asciende a: "<< interes<< endl;
	cout <<"El nuevo monto de inversion es: " << inversion;
	return 0;
}
