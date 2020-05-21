#include <iostream>
using namespace std;

int main(){
    int n;
    int fact=1;
    cout<<"Ingresar numero";cin>>n;
    
    for (int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<"El factorial de n es:"<<fact<<endl;
    return 0;
    
}