#include <iostream>
using namespace std;


int main(){
   float temp;

cout<<"Qual a temperatura?";
cin>>temp;

if (temp < 15) {
       cout << "Frio";
   }
   else if (temp >= 15 && temp <= 25) {
       cout << "Agradavel";
   }
   else {
       cout << "Quente";
   }
   return 0;
}



