#include <iostream>
using namespace std;
int main(){
	float acumVt, v1, v2, vNulo, vBranco=0;
	int vt=0;
	do{
		cout <<"Vote 1 para o cantidato A, 2 para o B"<<endl;
		cout <<"3 e voto nulo, 4 e voto branco"<<endl;
		cout <<"0 finaliza a execucao"<<endl;
		cin >> vt;
		switch(vt){
			case 1:
				v1 +=1;
				cout <<"Voto concluido"<<endl;
				acumVt +=1;
				break;
			case 2:
				v2 +=1;
				cout <<"Voto concluido"<<endl;
				acumVt +=1;
				break;
			case 3:
				vNulo +=1;
				cout <<"Voto nulo"<<endl;
				acumVt +=1;
				break;
			case 4:
				vBranco +=1;
				cout <<"Voto em branco"<<endl;
				acumVt +=1;
				break;
		}
			
	} while(vt !=0);
	cout <<"Votos no candidato A: "<<v1<<". Total de "<< (v1 / acumVt)*100<<"%"<<endl;
	cout <<"Votos no candidato B: "<<v2<<". Total de "<< (v2 / acumVt)*100<<"%"<<endl;
	cout <<"Votos nulos: "<<vNulo<<". Total de "<< (vNulo / acumVt)*100<<"%"<<endl;
	cout <<"Votos em branco: "<<vBranco<<". Total de "<< (vBranco / acumVt)*100<<"%"<<endl;
	return 0;
}