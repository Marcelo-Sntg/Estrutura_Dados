#include <iostream>
using namespace std;
int main(){
	int i=1;
	float altMaior =0;
	int numMaior=0;
	float altMenor =0;
	int numMenor=0;
	float comparador;
	float substituidorAlt;
	float substituidorNum;
	while(i<=3){
		cout <<"Digite a altura do aluno "<<i<<" em cm"<<endl;
		cin >>comparador;
		if(comparador > altMaior){
			substituidorAlt = altMaior;
			substituidorNum = numMaior;
			if(substituidorAlt < altMenor){
				altMenor = substituidorAlt;
				numMenor = substituidorNum;
			}
			altMaior = comparador;
			cout <<"Digite o numero do aluno "<<i<<endl;
			cin >> numMaior;
		}else if(altMenor == 0){
			altMenor = comparador;
			cout <<"Digite o numero do aluno "<<i<<endl;
			cin >> numMenor;
		}else if(comparador < altMenor){
			altMenor = comparador;
			cout <<"Digite o numero do aluno "<<i<<endl;
			cin >> numMenor;
		}
		i++;
	}
	cout <<"Maior altura e numero do aluno, respectivamente: "<<altMaior<<", "<<numMaior<<endl;
	cout <<"Menor altura e numero do aluno, respectivamente: "<<altMenor<<", "<<numMenor<<endl;
	
	return 0;	
}