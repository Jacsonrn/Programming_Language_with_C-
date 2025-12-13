#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
struct Produto{
int serie;
int dia;
int mes;
int ano;
};
void imprimeProdutos(Produto produtos[], int tamanho, int mes, int ano);

int main(){
int quantidade = 0;
int mes = 0;
int ano = 0;
cin >> quantidade;
Produto produtos[quantidade];
for(int i = 0; i < quantidade; i++){
    cin >> produtos[i].serie;
    cin >> produtos[i].dia;
    cin >> produtos[i].mes;
    cin >> produtos[i].ano;

}
cin >> mes;
cin >> ano;
imprimeProdutos(produtos, quantidade, mes, ano);

return 0;
}
void imprimeProdutos(Produto produtos[], int tamanho, int mes, int ano){
    bool encontrado = false;
    for(int i = 0; i < tamanho; i++){
        if(produtos[i].mes == mes && produtos[i].ano == ano){
            cout<< "Produtos fabricados em "<< mes <<"/"<< ano <<":"<<endl;
            cout<< produtos[i].serie;
            encontrado = true;
        }

    }
    if(encontrado == false){
        cout<< "Produtos fabricados em "<< mes <<"/"<< ano <<":"<<endl;
            cout<< "Nenhum"<<endl;
    }
}
     