<<<<<<< HEAD
#include <iostream>;
using namespace std;
int main(){
	cout <<"Exercicio 05"<<endl;
	int cp;
	float pe,valorPagar;
	cout <<"Digite o preco da etiqueta: ";
	cin >>pe;
	cout <<"Digite o codigo de condicao de pagamento: ";
	cin >>cp;
	if(cp==1){
		valorPagar=pe-pe*0.1;
	}else if(cp ==2){
		valorPagar=pe-pe*0.05;
	}else if(cp==3){
		valorPagar=pe;
	}else if(cp==4){
		valorPagar=pe+pe*0.1;
	}else{
		cout <<"Codigo da condicao de pagamento errado";
	}
	cout <<"Preco a ser pago: "<<pe<<endl 
	<<"Codigo da condicao de pagamento: "<<cp<<endl 
	<<"Valor a ser pago: "<<valorPagar<<endl;
	return 0;
=======
#include <iostream>;
using namespace std;
int main(){
	cout <<"Exercicio 05"<<endl;
	int cp;
	float pe,valorPagar;
	cout <<"Digite o preco da etiqueta: ";
	cin >>pe;
	cout <<"Digite o codigo de condicao de pagamento: ";
	cin >>cp;
	if(cp==1){
		valorPagar=pe-pe*0.1;
	}else if(cp ==2){
		valorPagar=pe-pe*0.05;
	}else if(cp==3){
		valorPagar=pe;
	}else if(cp==4){
		valorPagar=pe+pe*0.1;
	}else{
		cout <<"Codigo da condicao de pagamento errado";
	}
	cout <<"Preco a ser pago: "<<pe<<endl 
	<<"Codigo da condicao de pagamento: "<<cp<<endl 
	<<"Valor a ser pago: "<<valorPagar<<endl;
	return 0;
>>>>>>> 28220a29c523e80f9a481f8ae7b09b5fd0b45a7b
}