#include <iostream>
#include <cmath>
using namespace std;
int somaInteiros(int n);

int main(){
int num;
cin >> num;
cout <<"A soma dos "<<num<<" primos eh:"<<somaInteiros(num)<<endl;

    return 0;
}
int somaInteiros(int n){

if(n == 1 || n == 0){
    return n;
}else{
    return n + somaInteiros(n-1);
}


}