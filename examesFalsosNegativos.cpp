#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int const MAX = 30;
struct Exame{
char nome[MAX];
int medicao;
bool resultado;    
};
void imprimeExames(Exame pacientes[], int tamanho, int ref);

int main(){
int valorReferencia;
int quantidadePacientes;
cout << "Digite a quantidade pacientes:"<<endl;
cin >> quantidadePacientes;
cin.ignore();
Exame pacientes[quantidadePacientes];

for(int i = 0; i < quantidadePacientes; i++){
cout <<"Digite o nome do paciente: "<<i<<endl;
cin.getline(pacientes[i].nome, MAX);
cout <<"Digites a medicao do paciente: "<<i<<endl;
cin >> pacientes[i].medicao;
cout <<"Digites 0 ou 1 para negativo ou positivo respectivamente para o paciente: "<<i<<endl;
cin >> pacientes[i].resultado;
cin.ignore();
}
cout <<"Digite o valor de referencia:"<<endl;
cin >> valorReferencia;
imprimeExames(pacientes, quantidadePacientes, valorReferencia);
return 0;    
}
void imprimeExames(Exame pacientes[], int tamanho, int ref){
cout <<"Resultados para ref. igual a "<<ref<<endl;
for(int i = 0; i < tamanho; i++){
if(pacientes[i].medicao < ref && pacientes[i].resultado == true){
 cout <<"Nome: "<< pacientes[i].nome<<endl;
 cout << "Taxa: "<< pacientes[i].medicao<<endl;
 cout <<">>>Falso negativo"<<endl;
}else{
 cout <<"Nome: "<< pacientes[i].nome<<endl;
 cout << "Taxa: "<< pacientes[i].medicao<<endl;
}

}

}