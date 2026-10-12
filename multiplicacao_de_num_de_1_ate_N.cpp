#include <iostream>
using namespace std;
int main (){
    int N, x, mult=1;
    cin >> N;
    if ( N>= 1){
        for (x=1;x<=N;x++){
        mult=mult*x;
        }
    }
    else{
        cout<< "valor invalido";
    }
cout << mult << endl;
return 0;
}


