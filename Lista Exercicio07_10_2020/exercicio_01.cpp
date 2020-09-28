#include <iostream>

using namespace std;
#define NOMES 10
int main(){
	string nomes[NOMES], achei;
	
	for(int i=0; i<NOMES; i++){
		cout << "Digite um nome: ";
		cin >> nomes[i];
	}
	cout <<"Fique atento as letras maiusculas e minusculas" << endl;
	cout <<"Digite o nome que deseja procurar: ";
	cin >> achei;
	for(int p=0; p<NOMES; p++){
		if(nomes[p] == achei){
			cout << "Achei! " << achei;
		}
	}
	return 0;
}