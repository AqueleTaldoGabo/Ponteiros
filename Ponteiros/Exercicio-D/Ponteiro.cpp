#include <iostream>
using namespace std;

int main(){
    float numero1=7.3, numero2;
    float *fP;
    fP = &numero1;

    cout << "O valor apontado eh: " << *fP << endl;
    numero2 = *fP;
    cout << "O valor de numero2 eh: " << numero2 << endl;
    cout << "O endereco de numero1 eh: " << &numero1 << endl;
    cout << "O endereco alocado em fP eh: " << fP << endl;
}