#include <iostream>
#include <string>
#include <list>
#include <iterator>
using namespace std;
	void listaVazia(const list<string> lista){
		if(lista.empty()){
			cout <<"Lista vazia!"<<endl;
		}else{
			cout <<"Lista nao esta vazia"<<endl;
		}
	}
	void imprimirLista(const list<string> &lista){
		list<string>::const_iterator iterator;
		iterator = lista.begin();
		do{
			cout << *iterator<<endl;
			iterator++;
		}while(iterator != lista.end());
		cout <<endl;
	}
	
int main(){
	list<string> funcionarios;
	int qtd=0;
	cout <<"Quantos funcionarios serao cadastrados: ";
	cin >>qtd;
	//list<int> numFuncionario;
	string nome;
	for(int i=0; i<qtd; i++){
		cout <<"Digite o nome do funcionario: ";
		cin >>nome;
		funcionarios.push_back(nome);
	}
	listaVazia(funcionarios);
	imprimirLista(funcionarios);
	funcionarios.sort();
	imprimirLista(funcionarios);
	funcionarios.reverse();
	imprimirLista(funcionarios);
	cout <<"Quantidade de funcionarios cadastrados: "<<funcionarios.size();
}