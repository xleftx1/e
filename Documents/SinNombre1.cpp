#Incluide <iostream>
using namespace std;

double Interes, inversion;
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
	cout <<"El nuevo monto de inversion es: " << inversion;
	return 0;
}
