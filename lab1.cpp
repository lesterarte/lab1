#include <iostream> 
#include <cmath>
#include <cstdlib>

using std::cout; 
using std::cin; 
using std::endl; 

int triangular(int);
int main(int argc,char* argv[]){
	int op; 
	while(op != 3){

		cout<<"Ingrese la opcion que desea:\n1. Ejercicio 1\n2. Ejercicio 2\n3.Salir  "<<endl; 
		cin>>op; 
		if(op == 1){
			int numeroTriangular; 
			cout<<"Ingrese el numero que desea validar si es traingular: "<<endl;
			cin>>numeroTriangular;

			if(triangular(numeroTriangular) == -1)
				cout<<"El numero: "<<numeroTriangular<<" no es un numero triangular"<<endl;
			else
				cout<<"El numero: "<<numeroTriangular<<" es un numero triangular"<<endl;
		}

		if(op == 2){

		}

		if(op>3){
			cout<<"Opcion incorrecta"<<endl;

		}

	}
	return 0;
}

int triangular(int t){
	const int n = 1000; 
	int triangu=0; 
	for(int i=1; i<n; i++){
		triangu+=i;
		if(triangu == t )
			return i; 
	}
	return -1;
}
