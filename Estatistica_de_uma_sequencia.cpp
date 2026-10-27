#include <iostream>
using namespace std;
int main (){

    int num, posi=0,neg=0, sp=0,sn=0;
    int mp=0 , maior=0, menor;

    cin >> num;
    menor=num;

    while (num != 0){
        if (num > 0){
            posi++;
            sp = num + sp;
        }
        else{
            neg ++;
            sn = num + sn;
        }
        if (maior < num){
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
        if (num % 2 == 0){
            mp= mp+num;
        } cin >> num;
    } 
    cout << " Quantidade de Positivos: " << posi << ", soma: " << sp << endl;
    cout << "Quantidade de Negativos: " << neg << ", soma: " << sn << endl;
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << "Soma dos pares: " << mp << endl;
    
return 0;
}