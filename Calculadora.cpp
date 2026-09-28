#include <iostream>
#include <fstream>


using namespace std;
int main(){


    ifstream entrada ("entrada10.txt");
    float num1, num2, result;
    char op;
    entrada >> num1;
    entrada >> num2;
    entrada >> op;
    entrada.close();




    ofstream saida("saida10.txt");
    switch (op)
    {
    case '+':
        result = num1 + num2;
        saida << result;
        break;
    case '-':
        result = num1 - num2;
        saida << result;
        break;
    case '*':
    case 'x':
        result = num1 * num2;
        saida << result;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            saida << result;
        } else {
            saida << "Não é possível dividir por zero";
        }
        break;
    default:
        saida << "Operação inválida";
        break;
    }
    saida.close();
    return 0;
}






