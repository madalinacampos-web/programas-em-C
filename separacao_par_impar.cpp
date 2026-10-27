#include <iostream> 
using namespace std; 
int main(){

    int vetor[10];
    int pares[10];
    int impar[10];
    int somap=0, somaim=0, qntp=0,qnti=0,i;

    for (i =0; i < 10; i++){
        cin >> vetor[i];
    }
    for (i = 0; i < 10; i++){
    if (vetor[i] % 2 == 0){
        pares[qntp] = vetor[i];
        somap += vetor[i];
        qntp++;
    } else {
        impar[qnti] = vetor[i];
        somaim += vetor[i];
        qnti++;
    }
}

cout << "Pares:";
for (i = 0; i < qntp; i++){
    cout << " " << pares[i];
}
cout << endl;

cout << "Impares:";
for (i = 0; i < qnti; i++){
    cout << " " << impar[i];
}
cout << endl;

cout << "Quantidade de pares: " << qntp << endl;
cout << "Soma dos pares: " << somap << endl;
cout << "Quantidade de impares: " << qnti << endl;
cout << "Soma dos impares: " << somaim << endl;

return 0;
}

