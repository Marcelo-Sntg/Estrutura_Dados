<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
	cout << "Exercicio 01"<<endl;
	float altura1, peso1, imc;
	cout <<"Digite sua altura em metros: ";
	cin >> altura1;
	cout <<"Digite seu peso em quilogramas: ";
	cin >> peso1;
	imc = peso1/(altura1*altura1);
	if(imc<20){
		cout << "Abaixo do peso"<<endl;
	}else if(imc >= 20 && imc <25){
		cout <<"Peso ideal"<<endl;
	}else{
		cout << "Acima do peso"<<endl;
	}
=======
#include <iostream>
using namespace std;

int main(){
	cout << "Exercicio 01"<<endl;
	float altura1, peso1, imc;
	cout <<"Digite sua altura em metros: ";
	cin >> altura1;
	cout <<"Digite seu peso em quilogramas: ";
	cin >> peso1;
	imc = peso1/(altura1*altura1);
	if(imc<20){
		cout << "Abaixo do peso"<<endl;
	}else if(imc >= 20 && imc <25){
		cout <<"Peso ideal"<<endl;
	}else{
		cout << "Acima do peso"<<endl;
	}
>>>>>>> 28220a29c523e80f9a481f8ae7b09b5fd0b45a7b
}