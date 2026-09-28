#include <iostream>
using namespace std;


int main(){

  float valor,desconto,valorf;

  cout<<" Qual o valor? ";
  cin>>valor;

  if (valor >= 200){
       desconto= valor/10;
       valorf= valor-desconto;


       cout<<"desconto: "<<desconto<<endl;
       cout<<"valor final: "<<valorf<<endl;
   }
   else{
       cout<<valor<<endl;}
   return 0;
}


