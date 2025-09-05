#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i, j, n, m;
    cout << "Informe a quantidade de numeros\n";
    cin >> n;
    cout << "Informe a quantidade de potencias\n";
    cin >> m;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            cout << pow(i,j) << " "; 
        }
        cout << endl;
    }
    return 0;
}