#include <iostream>
using namespace std;

struct pessoa{
	string nome;
	string endereco;
	string cpf;
	int idade;
};
int main(){
	pessoa p[5];
	for(int i=0; i<5; i++){
		   cout <<"Nome da pessoa "<<i+1<<": ";	
		   cin >>p[i].nome;
		   cout <<"Endereco da pessoa "<<i+1<<": ";
		   cin >>p[i].endereco;
		   cout <<"CPF da pessoa "<<i+1<<": ";
		   cin >>p[i].cpf;
		   cout <<"Idade da pessoa "<<i+1<<": ";
		   cin >>p[i].idade;
	};
	for(int o=0; o<5; o++){
		cout <<"Nome: "<<p[o].nome<<". Endereco: "<<p[o].endereco<<". CPF: "<<p[o].cpf<<". Idade: "<<p[o].idade<<endl;
	}
	return 0;
}