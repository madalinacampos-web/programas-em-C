#include <iostream>
#include <fstream>


using namespace std;
int main(){


    /*ofstream arquivo ("entrada09.txt");
    arquivo << 120 << endl;
    arquivo << 10 << endl;
    arquivo.close();*/


    ifstream arquivo("entrada09.txt");
    float valor, distancia,frete,total;
    arquivo >> valor;
    arquivo >> distancia;
    arquivo.close();


    if (valor >= 300) {
    frete = 0;
} else if (distancia <= 5) {
    frete = 12;
} else if (distancia <= 15) {
    frete = 20;
} else {
    frete = 35;
}


    total= valor + frete;


    ofstream saida ("saida09.txt");
    saida << total << endl;
    saida << frete << endl;
    arquivo.close();
}





