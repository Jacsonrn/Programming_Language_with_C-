#include <iostream>
using namespace std;
float somatorio(int n);

int main(){
int n;
  cin >> n;
	cout << "Somatorio para n = "<<n<<": "<<somatorio(n)<<endl;
  

return 0;
}
float somatorio(int n){

  if(n <= 0){
    return 0;
  }

  return (1.0 + n*n)/n + somatorio(n-1);

}