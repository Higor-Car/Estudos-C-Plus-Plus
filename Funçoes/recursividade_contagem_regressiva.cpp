#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

void contarDeumAteDez(int numero,int contador=10);

int main(){
	
setlocale(LC_ALL,"Portuguese");

	contarDeumAteDez(1);
		
return 0;
}		

void contarDeumAteDez(int numero,int contador){
	
	cout<<"Número da função: "<<contador<<"\n";
	
	if(numero<contador){
		contarDeumAteDez(numero, --contador);
	}
	
}
