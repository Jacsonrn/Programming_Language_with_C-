#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int const MAX = 30;
struct Time{
char nome[MAX];
int golmarcados;
int golsofridos;    
};
void imprimirTimes(Time times[], int tamanho, int k);

int main(){
int quantidade = 0, k = 0;
cout <<"Quantos times?:"<<endl;
cin >> quantidade;
Time times[quantidade];
for(int i = 0; i < quantidade; i++){
    cout << "Nome time "<<i<<endl;
    cin.getline(times[i].nome, MAX);
    cout << "Gols marcados do time "<<i<<endl;
    cin >> times[i].golmarcados;
    cout << "Gols sofridos do time :"<<i<<endl;
    cin >> times[i].golsofridos;
    cin.ignore(); 
}
cout << "Digite o valor de K:"<<endl;
cin >> k;
return 0;    
}