#include <iostream>
using namespace std;
#define TAM 10

int main(){
	int vetor[]={10,20,30,40,50,60,70,80,90,100};
	int *pVetor = &vetor[0];
	cout <<"Ordem normal! "<<endl;
	for(int o=0; o<TAM; o++){
		cout << *pVetor<<endl;
		pVetor++;
	}
	cout <<"Ordem inversa!"<<endl;
	pVetor = &vetor[TAM-1];
	for(int p=0; p<TAM; p++){
		cout << *pVetor<<endl;
		pVetor--;
	}
	return 0;
}