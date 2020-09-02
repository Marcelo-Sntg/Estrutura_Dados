<<<<<<< HEAD
#include <iostream>
using namespace std;
int main(){
	cout <<"Exercicio 04"<<endl;
	float salario, reajuste;
	cout <<"Valor do salario: ";
	cin >>salario;
	if(salario<1000){
		reajuste = salario * 0.15;
	}else if(salario>=1000 && salario<=1500){
		reajuste = salario * 0.1;
	}else{
		reajuste=salario*0.05;
	}
	cout <<"Salario: "<<salario<<endl
	<<"Reajuste: "<<reajuste<<endl 
	<<"Salario atual: "<<reajuste+salario<<endl;
=======
#include <iostream>
using namespace std;
int main(){
	cout <<"Exercicio 04"<<endl;
	float salario, reajuste;
	cout <<"Valor do salario: ";
	cin >>salario;
	if(salario<1000){
		reajuste = salario * 0.15;
	}else if(salario>=1000 && salario<=1500){
		reajuste = salario * 0.1;
	}else{
		reajuste=salario*0.05;
	}
	cout <<"Salario: "<<salario<<endl
	<<"Reajuste: "<<reajuste<<endl 
	<<"Salario atual: "<<reajuste+salario<<endl;
>>>>>>> 28220a29c523e80f9a481f8ae7b09b5fd0b45a7b
}