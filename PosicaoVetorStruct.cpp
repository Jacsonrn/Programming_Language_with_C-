#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int const MAX = 20;
struct timeFutebol{
char nome[MAX];
int pontos;
};
int timeCampeao(timeFutebol times[], int tamanho);
int main(){
int quantidadeTimes = 0;
cin >> quantidadeTimes;
cin.ignore();
timeFutebol times[quantidadeTimes];
for(int i = 0; i < quantidadeTimes; i++){
cin.getline(times[i].nome, MAX);
cin >>times[i].pontos;
cin.ignore();
}
int campeao = timeCampeao(times, quantidadeTimes);
cout << times[campeao].nome << ", "<< times[campeao].pontos<<endl;
return 0;    
}
int timeCampeao(timeFutebol times[], int tamanho){
int campeao = 0;
for(int i = 0; i < tamanho; i++){
    if(times[i].pontos > campeao){
        campeao = i;
    }

}
return campeao;
}