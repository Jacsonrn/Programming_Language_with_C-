#include <iostream>
#include <math.h>
using namespace std;

int main(){
int n = 0, m =0, i, r=0; //r1, r2;
cout<<"Digite a quantidade de numeros:"<<endl;
cin>>n;
cout<<"Digite a quantidade de potencias:"<<endl;
cin>>m;

for(i=1; i<=n; i++){
   
    for(r = r; r <= pow(i,m);){
         r = pow(i,2);
         cout<<r<<endl;
    }
}
return 0;

}