using namespace std;

#include <iostream>
int Divisores2 (int numero2){
	
	int div, resto, suma2 = 0;
	div = numero2 - 1;

	//Calculo 
	resto = numero2 % div;
	
	while (div > 0){
		
		if (resto == 0){
			
			div = div - 1;
			
			resto = numero2 % div;
			suma2 = div + suma2;
			
		}
		else{
			
			div = div -1;
			resto = numero2 % div;
			
		}
		
	}
	return (suma2);
}

/******************************************************************************/

int Divisores1 (int numero1){
	
	int div, resto, suma1;
	
	div = numero1;

	//Calculo 
	resto = numero1 % div;
	
	while (div > 0){
		
		if (resto == 0){
			
			div = div - 1;
			suma1 = div + suma1;
			
			resto = numero1 % div;
				
		}
		
		else{
			
			div = div -1;
			resto = numero1 % div;
			
		}	
	}
	
	suma1 = suma1 +1;

	return (suma1);
}

/******************************************************************************/

bool SonAmigos (int numero1, int numero2){
	
	
	bool Son_amigos = false;
	
	int suma1 = Divisores1(numero1);
	int suma2 = Divisores2(numero2);
	
	if (suma1 == numero2){
		
		if (suma2 == numero1)
			Son_amigos = true;
	
		else  
			Son_amigos = false;
		
		
	}
	else Son_amigos = false;
	
	return (Son_amigos);
}

/******************************************************************************/

int main(){
	
	int numero1, numero2;
	bool Numero_amigo;
	
	do{
	
	cout << "Introduzca dos numeros naturales que sean amigos: ";
	cin >> numero1 >> numero2;
	}while (numero1 < 0 || numero2 < 0);
	
	//Calculos
	Numero_amigo = SonAmigos(numero1, numero2);
	
	cout << Numero_amigo << endl;
	
	if (Numero_amigo == true){
		cout << "Los numeros son amigos";
	}
	else {
		cout << "los numeros no son amigos ";
	}
	
	return 0;
}
