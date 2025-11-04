#include <iostream>
#include <cmath>
using namespace std;
void elevaQuadrado(int norma[], int quadrado[], int n);
int somaVetor(int quadrado[], int n);


int main(){
int n, i;
  float soma = 0, norma;
  cin >> n;
  int normaVetor[n], quadrado[n];
  for(i = 0 ; i < n; i++){
  cin >> normaVetor[i]; 
  }
  elevaQuadrado(normaVetor, quadrado, n);
  soma = somaVetor(quadrado, n);
	norma = sqrt(soma);
  
cout << "Norma do vetor: "<<norma<<endl;

return 0;
}
void elevaQuadrado(int norma[], int quadrado[], int n){
  int i;
	for(i = 0; i < n; i++){
  quadrado[i] = norma[i] * norma[i];
  
  }

}

int somaVetor(int quadrado[], int n){
int i, somaLocal = 0;
  
  for(i = 0; i < n; i++){
  somaLocal += quadrado[i];
  
  }
return somaLocal;
}
