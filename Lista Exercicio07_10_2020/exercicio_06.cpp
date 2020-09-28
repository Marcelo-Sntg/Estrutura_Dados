#include <iostream>
using namespace std;

#define DIAS 5
//O valor 99 e -99 é apenas para comparar inicialmente

int main(){
	float temperatura[DIAS], maiorTemp=-99, menorTemp=99, mediaAnual=0, numDiasInferior=0;
	for(int i=0; i<DIAS; i++){
		cout <<"Digite a temperetura do dia "<<i+1<<": ";
		cin >> temperatura[i];
		mediaAnual +=temperatura[i];
	}
	mediaAnual /= DIAS;
	for(int cont =0;cont < DIAS; cont++){
		if(maiorTemp < temperatura[cont]){
			if(maiorTemp < menorTemp && maiorTemp != -99){
				menorTemp = maiorTemp;
			}
			maiorTemp = temperatura[cont];		
		}else if(temperatura[cont] < menorTemp){
			menorTemp = temperatura[cont];
		}
	}
	for(int p=0; p<DIAS; p++){
		if(temperatura[p]<mediaAnual){
			numDiasInferior++;
		}
	}
	
	cout <<"Menor temperatura: "<<menorTemp<<endl;
	cout <<"Maior temperatura: "<<maiorTemp<<endl;
	cout <<"Media anual e: "<<mediaAnual<<endl;
	cout <<"Dias inferiores a media anual: "<<numDiasInferior;
	
	return 0;
}