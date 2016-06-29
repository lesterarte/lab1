#include <iostream> 
#include <cmath>
#include <cstdlib>

using std::cout; 
using std::cin; 
using std::endl; 

int triangular(int);
int triangularPrevio(int);
long double seno(int);
long double coseno(int);
int factorial(int);


int main(int argc,char* argv[]){
	int op, ladoa,ladob; 
	double ladoc, arcsen, anguloB,anguloC; 
	int angulo; 
	while(op != 4){

		cout<<"Ingrese la opcion que desea:\n1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4.Salir  "<<endl; 
		cin>>op; 
		if(op == 1){
			int numeroTriangular; 
			cout<<"Ingrese el numero que desea validar si es traingular: "<<endl;
			cin>>numeroTriangular;

			if(triangular(numeroTriangular) == -1)
				cout<<"El numero: "<<numeroTriangular<<" no es un numero triangular"<<endl;
			else{
				cout<<"El numero: "<<numeroTriangular<<" es un numero triangular"<<endl;
				cout<<"El numero triangular previo es: "<<triangularPrevio(numeroTriangular)<<endl; 
			}
		}

		if(op == 2){

			cout<<"Ingrese el Angulo: ";
			cin>>angulo; 
			cout<<"\nEl seno del angulo: "<<angulo<<" es: "<<seno(angulo)<<endl;
			cout<<"\nEl Coseno del angulo: "<<angulo<<" es: "<<coseno(angulo)<<endl; 
		}

		if(op==3){

			cout<<"Ingrese el Lado a: "; 
			cin>>ladoa; 
			cout<<"\nIngrese el lado b: ";
			cin>>ladob; 
			cout<<"\nIngrese el Angulo a: ";
			cin>>angulo;

			anguloB = asin((ladob*seno(angulo))/ladoa)*(180/3.1416);
			anguloC = 180-angulo-anguloB;
			ladoc =  (ladob*seno(anguloC))/seno(anguloB);
			cout<<"\nEl Angulo B es: "<<anguloB<<endl;
			cout<<"El Angulo C es: "<<anguloC<<endl;
			cout<<"El lado C es: "<<ladoc<<endl;	
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
			return triangu; 
	}
	return -1;
}
int triangularPrevio(int t){
	const int n = 1000; 
	int triangu=0; 
	for(int i=1; i<n; i++){
		triangu+=i;
		if(triangu == t )
			return triangu-i; 
	}
	return -1;
}

long double seno(int angulo){
	int infinitoValor =10; 
	const double pi = 3.1416;
	long double valorEncontrado=0.0;
	for (int i = 0; i < infinitoValor; i++)
	{
		valorEncontrado += (pow(-1,i)/factorial(2*i + 1))*pow(angulo*(pi/180),2*i + 1);
	}
	return valorEncontrado;
}

long double coseno(int angulo){

	int infinitoValor =10; 
	const double pi = 3.1416;
	long double valorEncontrado=0.0;
	for (int i = 0; i < infinitoValor; i++)
	{
		valorEncontrado += (pow(-1,i)/factorial(2*i))*pow(angulo*(pi/180),2*i);
	}
	return valorEncontrado;
}

int factorial(int factor){

	if(factor == 1 || factor == 0)
		return 1; 
	else
		return factor*factorial(factor-1);
}
