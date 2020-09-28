#include <iostream>
using namespace std;
#define TAMANHO 20
int main(){
	float vetNormal[TAMANHO], vetInverso[TAMANHO];
	for(int i=0; i<=19; i++){
		cout <<"Digite um valor: ";
		cin >> vetNormal[i];
		vetInverso[19-i]=vetNormal[i];
	}
	for(int o=0; o<=19; o++){
		cout <<vetInverso[o]<<" ";
	}
	return 0;
}