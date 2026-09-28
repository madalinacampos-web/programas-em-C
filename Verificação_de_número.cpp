#include <iostream>
#include <fstream>


using namespace std;


int main(){


    ifstream arquivo ("entrada07.txt");
    int dados;
    arquivo >> dados;
    cout << dados << endl;
    arquivo.close();


    if (dados > 0){


        ofstream arquivo ("saida07.tx");
    arquivo << "Positivo"
            <<endl;
    arquivo.close();
    }
    else if (dados<0)
    {
       ofstream arquivo ("saida07.tx");
    arquivo << "Negativo"
            <<endl;
    arquivo.close();
    }
    else{
        ofstream arquivo ("saida07.tx");
    arquivo << "Zero"
            <<endl;
    arquivo.close();

    }
    return 0;
}




