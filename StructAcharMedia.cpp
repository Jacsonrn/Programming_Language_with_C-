#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int const MAX = 30;
struct Pessoa{
char nome[MAX];
int idade;
};
float mediaIdades(Pessoa dados[], int tamanho);

int main(){
int tamanho;
cin >> tamanho;
cin.ignore();
Pessoa dados[tamanho];
for(int i = 0; i < tamanho; i++){
    cin.getline(dados[i].nome, MAX);
    cin >> dados[i].idade;
    cin.ignore();

}
cout << "Media de idades: "<<mediaIdades(dados, tamanho)<<endl;

return 0;
}
float mediaIdades(Pessoa dados[], int tamanho){
float soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += dados[i].idade;
    }
return soma/tamanho;
}