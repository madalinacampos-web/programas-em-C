#include <iostream>
using namespace std;
int main (){
    int ini,final,impar=0,i;

    cout << "Digite o valor inicial e final:  ";
    cin >> ini >> final;

    if ( ini <= final){
        for (i=ini; i <= final;i++){
            if (i%2 != 0){
                impar=impar+i;
            }
        }
    cout << impar << endl;
    }
    else{
    cout << "Intervalo de valores inválido";
    }
return 0;
}

