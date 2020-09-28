#include <iostream>
using namespace std;
#define ALUNOS 20

int main(){
	float notas[ALUNOS], media=0;
	int acimaMedia=0;
	
	for(int i=0; i<ALUNOS; i++){
		cout << "Digite a nota do aluno "<<i+1<<":";
		cin >> notas[i];
		media = media + notas[i];
	}
	media = media / ALUNOS;
	for(int n=0; n<ALUNOS; n++){
		if(notas[n] > media){
			acimaMedia++;
		}
	}
	cout <<"Media da turma: "<<media<<endl;
	cout <<"Quantidade de notas acima da media: "<<acimaMedia;
	return 0;
}