<<<<<<< HEAD
#include <iostream>
using namespace std;
int main(){
	cout <<"Exercicio 03"<<endl;
	float valHora, salBruto, imposto, salLiquido, salMinimo;
	int hrsTrabalhadas;
	cout <<"Digite quantas horas foram trabalhadas: ";
	cin >> hrsTrabalhadas;
	cout <<"Digite o valor do salario minimo: ";
	cin >> salMinimo;
	valHora = salMinimo / 2;
	salBruto = valHora * hrsTrabalhadas;
	imposto = salBruto * 0.03;
	salLiquido = salBruto - imposto;
	cout <<"Horas trabalhadas: "<<hrsTrabalhadas<<endl
	<<"Valor da hora: "<<hrsTrabalhadas<<endl
	<<"Salario bruto: "<<salBruto<<endl
	<<"Imposto: "<<imposto<<endl 
	<<"Salario liquido: "<<salLiquido<<endl;
=======
#include <iostream>
using namespace std;
int main(){
	cout <<"Exercicio 03"<<endl;
	float valHora, salBruto, imposto, salLiquido, salMinimo;
	int hrsTrabalhadas;
	cout <<"Digite quantas horas foram trabalhadas: ";
	cin >> hrsTrabalhadas;
	cout <<"Digite o valor do salario minimo: ";
	cin >> salMinimo;
	valHora = salMinimo / 2;
	salBruto = valHora * hrsTrabalhadas;
	imposto = salBruto * 0.03;
	salLiquido = salBruto - imposto;
	cout <<"Horas trabalhadas: "<<hrsTrabalhadas<<endl
	<<"Valor da hora: "<<hrsTrabalhadas<<endl
	<<"Salario bruto: "<<salBruto<<endl
	<<"Imposto: "<<imposto<<endl 
	<<"Salario liquido: "<<salLiquido<<endl;
>>>>>>> 28220a29c523e80f9a481f8ae7b09b5fd0b45a7b
}