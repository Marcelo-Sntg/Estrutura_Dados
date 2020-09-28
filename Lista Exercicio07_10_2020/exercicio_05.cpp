#include <iostream>
using namespace std;

int main(){
	int tam =0;
	float vetA[tam], vetB[tam], vetSoma[tam];
	
	cout <<"Digite o tamanho do vetor: ";
	cin >>tam;
	if(tam > 0){
		for(int i=0; i<tam; i++){
			cout <<"Digite um valor para o vetor A: ";
			cin >>vetA[i];
		}
		for(int o=0; o<tam; o++){
			cout <<"Digite um valor para o vetor B: ";
			cin >>vetB[o];
			vetSoma[o]=vetA[o]+vetB[o];
		}
		for(int p=0; p<tam; p++){
			cout <<vetSoma[p]<<" ";
		}	
	}else{
		cout <<"Digite um numero maior que 0";
	}
	return 0;
}