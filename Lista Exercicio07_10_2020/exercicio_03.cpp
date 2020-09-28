#include <iostream>
using namespace std;
#define VETORES 10

int main(){
	float vetA[VETORES], vetM[VETORES], a;
	for(int i=0; i<VETORES; i++){
		cout <<"Digite um valor: ";
		cin >> vetA[i];
	}
	cout <<"Digite o valor que vai multiplicar os anteriores: ";
	cin >>a;
	for(int o=0; o<VETORES; o++){
		vetM[o]=vetA[o] * a;
	}
	for(int p=0; p<VETORES; p++){
		cout <<vetM[p]<<" ";
	}
	return 0;
}