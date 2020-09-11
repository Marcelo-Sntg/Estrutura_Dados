#include <iostream>
using namespace std;
int main(){
	int idades=0;
	int cont=0;
	float bom=0;
	float otimo=0;
	float regular=0;
	float ruim=0;
	int escolha=0;
	int idadeCont=0;
	bool condicional=false;
	while(condicional == false){
		cout <<"Digite sua idade: "<<endl;
		cin >> idadeCont;
		if(idadeCont > 0){
			idades += idadeCont;
			cont++;
			cout <<"Avalie o filme"<<endl;
			cout <<"1 - Otimo"<<endl;
			cout <<"2 - Bom"<<endl;
			cout <<"3 - Regular"<<endl;
			cout <<"4 - Ruim"<<endl;
			cin >>escolha;
			switch(escolha){
				case 1:
					otimo++;
					break;
				case 2:
					bom++;
					break;
				case 3:
					regular++;
					break;
				case 4:
					ruim++;
					break;
			}
		}else{
			condicional = true;
		}
	}
	cout << cont<<" pessoas responderam a pesquisa"<<endl;
	cout <<"Media de idade das pessoas que responderam foi "<< idades / cont <<endl;
	cout <<(otimo / cont) * 100 << "% otimo, "<<(bom / cont) * 100 << "% bom, "<<(regular / cont) * 100 << "% regular, "<<(ruim / cont) * 100 << "% ruim.";
	return 0;
}