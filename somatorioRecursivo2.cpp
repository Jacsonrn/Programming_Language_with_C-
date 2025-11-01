#include <iostream>
using namespace std;
float somatorio(int numero);

int main(){
int numero;
  cin >> numero;
  cout<<"Somatorio para n = "<<numero<<": "<<somatorio(numero)<<endl;

return 0;
}
float somatorio(int numero){

  if(numero == 0){
  
    return 0;
  }
		return float(3+2*numero)/(numero*numero) + somatorio(numero -1);

}